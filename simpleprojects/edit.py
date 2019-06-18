#!/Python27/python.exe
print "Content-type:text/html\r\n\r\n"
import MySQLdb
import cgi
formfield=cgi.FieldStorage()
staffid=formfield.getvalue('q')
db=MySQLdb.connect("127.0.0.1","root","root","staff")
if db:
           cursor=db.cursor()
           try:
                      query="select * from tbl_staff where sid=%s"%(staffid)
                      cursor.execute(query)
                      results=cursor.fetchall()
                      for a in results:
                                 staffid=a[0]
                                 name=a[1]
                                 dept=a[2]
                                 emailid=a[3]
                                 mobile=a[4]                                 
           except:
                      print "error"
                      
else:
           print "not connected"
print "<html>"
print "<head>"
print "<link rel='stylesheet' type='text/css' href='style.css'>"
print "</head>"
print "<body>"
print "<div id='wrapper'>"
print "<div id='banner'>"
print "<br><br>"
print "<br><br>"
print "<center><b><font size=5>REGISTRATION PAGE</font></b>"
print "</div>"
print "<div id='topmenu'><center><a href='fifth1.py'>VIEW DETAILS</a></center></div>"
print "<div id='columnleft'></div>"
print "<div id='columnright'></div>"
print "<div id='columncenter'>"
print "<br><br>"
print "<form name='login' action='update_staff.py' method='post'>"
print "<center><table width='25%' height='20%' align='center' border='0' bgcolor='teal' cellspacing=1 cellpadding=1>"
print "<tr><td>STAFFID:</td><td><input type='text' name='sid' READONLY required value=%s></td></tr>"%(staffid)
print "<tr><td>NAME:</td><td><input type='text' name='sname' required value=%s></td></tr>"%(name)
print "<tr><td>DEPARTMENT:</td><td><input type='text' name='dept' required value=%s></td></tr>"%(dept)
print "<tr><td>EMAIL ID:</td><td><input type='email' name='eid' required value=%s></td></tr>"%(emailid)
print "<tr><td>PHONE NO:</td><td><input type='text' name='pno' required value=%s></td></tr>"%(mobile)
print "</table>"
print "<br><br>"
print "<center><input type='submit' name='submit' value='UPDATE'>"
print "</form></div>"
print "<div id='footer'>"
print "</div>"
print "</div>"
print "</body>"
print "</html>"
edit.py
Displaying secondpage.py.