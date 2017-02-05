def echo(user, lang, sys):
    print('User:', user, 'Language:', lang, 'Platform:', sys)

echo('Carlos', 'Python', 'Windows')

echo(lang = 'Python', sys = 'Mac OS', user = 'Anne')

def mirror(user = 'Carole', lang = 'Python'):
    print('\nUser:', user, 'Language:', lang)

mirror()
mirror(lang = 'Java')
mirror(user = 'Tony')
mirror('Susan', 'C++')
