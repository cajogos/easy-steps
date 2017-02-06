from tkinter import *

window = Tk()

window.title('Label Example')

label = Label(window, text = 'Hello World!')

label.pack(padx = 200, pady = 50)

window.mainloop()
