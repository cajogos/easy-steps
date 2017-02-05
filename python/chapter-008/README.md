# 8. Processing Requests

This chapter demonstrates how to create server-side Python scripts to process HTML web requests.

## Summary

- Python can be installed on a web server host to process script code before sending a response to a web browser client.
- A server-side Python script can generate an **HTML** document by describing the content type as `Content-type: text/html\r\n\r\n`.
- The `cgi` module provides a `FieldStorage()` constructor to create an object for storing submitted data as **key:value** pairs.
- Any value stored in a `FieldStorage` object can be retrieved by specifying its key name to the object's `getvalue()` method.
- The browser can send data to a script using the **GET** method that appends **key=value** pairs to its URL address after a **?** mark.
- Multiple **key=value** pairs of data can be submitted using the **GET** method if each pair is separated by an **&** character.
- The **GET** method request string length cannot exceed 1024 characters and will be visible in the browser address field.
- The browser can send data to a script using the **POST** method that submits **key=value** pairs as a separate message.
- Data submitted from an **HTML** form can be stored in a `FieldStorage` object as **key:value** pairs for each form field.
- A server-side Python script can provide default values for submitted **HTML** form fields that the user has left bank.
- Checkbox fields of an **HTML** form that are unchecked do not get submitted to the web server.
- A selected radio button in a group provides the value to be associated with the group name when the form gets submitted.
- A selected item in a dropdown list provides the value to be associated with the list name when the form gets submitted.
- An **HTML** form can allow file uploads only if its `enctype` attributes specifies its encoding type as **"multipart/form-data"**.