dict = {'name': 'Bob', 'ref': 'Python', 'sys': 'Win'}
print('Dictionary:', dict)

print('\nReference:', dict['ref'])

print('\nKeys:', dict.keys())

print('\nIs There A name Key?:', 'name' in dict)

del dict['name']
dict['user'] = 'Tom'
print('\nDictionary:', dict)

print('\nIs There A name Key?:', 'name' in dict)
