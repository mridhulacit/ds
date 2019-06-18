#!/Python27/python.exe
print "Content-type:text/html\n\r"
import cgi
formfield=cgi.FieldStorage()
name=formfield.getvalue('username')
pwd=formfield.getvalue('password')
if name=="LST" and pwd=="LST":
           print "<script>location.href='third page.py'</script>"

else:
           print "<script>location.href='first page.py'</script>"
##           print "Invalid Username or Password"
secondpage.py
Displaying secondpage.py.