from Person import *

class Man(Person):
    '''A derived class to define Man properties.'''

    def speak(self, msg):
        print(self.name, ':\n\tHello!', msg)
