#!/Python27/Python.exe
print "Content-type:text/html\n\r"
import MySQLdb
import cgi
formfield=cgi.FieldStorage()
staffid=formfield.getvalue('sid')
staffname=formfield.getvalue('sname')
dept=formfield.getvalue('dept')
email=formfield.getvalue('eid')
ph=formfield.getvalue('pno')
db=MySQLdb.connect("127.0.0.1","root","root","staff")
if db:
          cursor=db.cursor()
          query="update tbl_staff set name='%s',dept='%s',email='%s',mob='%s'  where sid='%s'"%(staffname,dept,email,ph,staffid)
          cursor.execute(query)
          db.commit()
          print "<script>location.href='fifth1.py';</script>"
else:
          print "not connected"




updatestaff.py
Displaying secondpage.py.