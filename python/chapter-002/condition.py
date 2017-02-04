a = 1
b = 2

print('\nVariable a Is :', 'One' if (a == 1) else 'Not One')
print('Variable a Is :', 'Even' if (a % 2 == 0) else 'Odd')

print('\nVariable b Is :', 'One' if (b == 1) else 'Not One')
print('Variable b Is :', 'Even' if (b % 2 == 0) else 'Odd')

max = a if (a > b) else b
print('\nGreater Value Is:', max)
