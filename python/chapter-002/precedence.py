a = 2
b = 4
c = 8

print('\nDefault Order:\t', a, '*', c, '+', b, '=', a * c + b)
print('Forced Order:\t', a, '* (', c, '+', b, ') =', a * (c + b))

print('\nDefault Order:\t', c, '//', b, '-', a, '=', c // b - a)
print('Forced Order:\t', c, '// (', b, '-', a, ') =', c // (b - a))

print('\nDefault Order:\t', c, '%', a, '+', b, '=', c % a + b)
print('Forced Order:\t', c, '% (', a, '+', b, ') =', c % (a + b))

print('\nDefault Order:\t', c, '**', a, '+', b, '=', c ** a + b)
print('Forced Order:\t', c, '** (', a, '+', b, ') =', c ** (a + b))
