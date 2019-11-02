#!/Python27/python.exe
print "Content-type:text/html\r\n"
import cgi
import MySQLdb
formfield=cgi.FieldStorage()
sid=formfield.getvalue('sid')
name=formfield.getvalue('sname')
dept=formfield.getvalue('dept')
mail=formfield.getvalue('eid')
ph=formfield.getvalue('pno')
db=MySQLdb.connect("127.0.0.1","root","root","staff")
if db:
           cursor=db.cursor()
           try:
                      query="insert into tbl_staff values('%s','%s','%s','%s','%s')"%(sid,name,dept,mail,ph)
                      cursor.execute(query)
                      db.commit()
                      print "<script>location.href='third page.py';</script>"

           except:
                      db.rollback()
                      print "<script>location.href='third page.py';</script>"
else:
           print "not connected"