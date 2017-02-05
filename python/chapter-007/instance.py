from Bird import *

print('\nClass Instances of:\n', Bird.__doc__)

polly = Bird('Squawk, squawk!')

print('\nNumber of Birds:', polly.count)
print('Polly Says:', polly.talk())

harry = Bird('Tweet, tweet!')
print('\nNumber of Birds:', harry.count)
print('Harry Says:', harry.talk())