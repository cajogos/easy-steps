num = input('Enter An Integer: ')

def square(num):
    if not num.isdigit():
        return 'Invalid Entry'
    num = int(num)
    return num * num

print(num, 'Squared Is:', square(num))
