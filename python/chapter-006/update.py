text = 'The political slogan "Workers Of The World Unite!" is from The Communist Manifesto.'

with open('update.txt', 'w') as file:
    file.write(text)
    print('\nFile Now Closed?:', file.closed)

print('File Now Closed?:', file.closed)

with open('update.txt', 'r+') as file:
    text = file.read()
    print('\nString:', text)

    print('\nPosition In File Now:', file.tell())
    position = file.seek(33)
    print('Position In File Now:', file.tell())

    file.write('All Lands')

    file.seek(59)
    file.write('the tombstone of Karl Marx.')

    file.seek(0)
    text = file.read()
    print('\nString:', text)
