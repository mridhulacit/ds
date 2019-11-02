#!/Python27/Python.exe
print "Content-type:text/html\n\r"
import cgi
formfield=cgi.FieldStorage()
staffid=formfield.getvalue('q')
import MySQLdb
db=MySQLdb.connect("127.0.0.1","root","root","staff")
if db:
          cursor=db.cursor()
          try:
                     query="delete from tbl_staff where sid=%s"%(staffid)
                     cursor.execute(query)
                     db.commit()
                     print "<script>location.href='fifth1.py';</script>"
          except:
                     db.rollback()
          
else:
          print "not connected"
