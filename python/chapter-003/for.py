chars = ['A', 'B', 'C']
fruit = ('Apple', 'Banana', 'Cherry')
dict = {'name': 'Carlos', 'ref': 'Python', 'sys': 'Win'}

print('\nElements:\t', end = '')
for item in chars:
    print(item, end = '')

print('\nEnumerated:\t', end = '')
for item in enumerate(chars):
    print(item, end = '')

print('\nZipped:\t', end = '')
for item in zip(chars, fruit):
    print(item, end = '')

print('\nPaired:')
for key, value in dict.items():
    print(key, '=', value)
