from time import *

i = input('How many seconds? ')

start_timer = time()

struct = localtime(start_timer)

print('\nStarting Countdown At:', strftime('%X', struct))

i = int(i)
while i > -1:
    print(i)
    i -= 1
    sleep(1)

end_timer = time()

difference = round(end_timer - start_timer)

print('\nRuntime:', difference, 'Seconds')
