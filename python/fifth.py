#!/Python27/python.exe
print "Content-type:text/html\r\n\r\n"
print "<html>"
print "<head>"
print "<link rel='stylesheet' type='text/css' href='style.css'>"
print "</head>"
print "<body>"
print "<div id='wrapper'>"
print "<div id='banner'>"
print "<br><br>"
print "<br><br>"
print "<center><b><font size=5>STAFF DETAILS</font></b>"
print "</div>"
print "<div id='topmenu'></div>"
print "<div id='columnleft'></div>"
print "<div id='columnright'></div>"
print "<div id='columncenter'>"
print "<br><br>"
import cgi
import MySQLdb
db=MySQLdb.connect("127.0.0.1","root","root","staff")
if db:
           cursor=db.cursor()
           try:
                      query="select * from tbl_staff"
                      print "<table width='50%' height='30%' border='1'>"
                      print "<tr><td>staffid</td><td>name</td><td>dept</td><td>emailid</td><td>mobile"
                      print "</td><td>edit</td><td>delete</td></tr>"
                      cursor.execute(query)
                      results=cursor.fetchall()
                      for a in results:
                                 staffid=a[0]
                                 name=a[1]
                                 dept=a[2]
                                 emailid=a[3]
                                 mobile=a[4]
                                 print "<tr><td>%s"%(staffid)
                                 print "</td><td>%s"%(name)
                                 print "</td><td>%s"%(dept)
                                 print "</td><td>%s"%(emailid)
                                 print "</td><td>%s"%(mobile)
                                 print "</td><td>"
                                 print "<a href='edit.py?q=%s'>%s</a>"%(staffid,staffid)
                                 print "</td><td>"
                                 print "<a href='delete.py?q=%s'>%s</a>"%(staffid,staffid)
                                 print "</td></tr>"
                      print "</table></center>"
                                 
           except:
                      print "error"
           
                      
else:
           print "not connected"
print "</div>"
print "<div id='footer'>"
print "</div>"3
print "</div>"
print "</body>"
print "</html>"