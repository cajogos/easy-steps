class Songbird:

    def __init__(self, name, song):
        self.name = name
        self.song = song
        print(self.name, 'Is Born...')

    def sing(self):
        print(self.name, 'Sings:', self.song)

    def __del__(self):
        print(self.name, 'Flew Away!\n')
