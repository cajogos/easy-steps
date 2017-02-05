import cgi, os

data = cgi.FieldStorage()

upload = data['filename']
filename = os.path.basename(upload.filename)

with open(filename, 'wb') as copy:
    copy.write(upload.file.read())

print('Content-type: text/html\r\n')
print('<!DOCTYPE html>')
print('<html lang="en">')
print('<head>')
print('<meta charset="UTF-8">')
print('<title>Python Response</title>')
print('</head>')
print('<body>')
print('<h1>File Uploaded:', filename, '</h1>')
print('<a href="text.html">Back</a>')
print('</body>')
print('</html>')
