from Songbird import *

bird_1 = Songbird('Koko', 'Tweet, tweet!\n')
print(bird_1.name, 'ID:', id(bird_1))
bird_1.sing()

del bird_1

bird_2 = Songbird('Louie', 'Chirp, chirp!\n')
print(bird_2.name, 'ID:', id(bird_2))
bird_2.sing()

bird_3 = Songbird('Misty', 'Squawk, squawk!\n')
print(bird_3.name, 'ID:', id(bird_3))
bird_3.sing()

del bird_2
del bird_3
