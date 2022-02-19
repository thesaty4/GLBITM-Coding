"""
Implementation of stack using LIST
# PROPERTY OF STACK, LIFO
"""
from termcolor import colored, cprint
class Stack:
    limit=0
    def __init__(self):
        self.stack=list()
        limit=int(input("Please Enter limit of stack : "))
        self.limit=limit

    def push(self):
        if self.limit==len(self.stack):
            print("Stack is FUll !")
            self.display()
        else:
            element=input("Enter Element : ")
            self.stack.append(element)

    def pop_element(self):
        if not self.stack:
            cprint("|                |",'red',attrs=['blink'])
            cprint("| Stack is Empty |",'red',attrs=['blink'])
            cprint(" ----------------",'red',attrs=['blink'])
        else:
            element=self.stack.pop(0) # Element popped in FILO Manner
            print(f"{element} is popped")

    def display(self):

        newStack=self.stack
        newStack.reverse()
        if not self.stack:
            cprint("\n|                |",'red',attrs=['blink'])
            cprint("| Stack is Empty |",'red',attrs=['blink'])
            cprint(" ----------------",'red',attrs=['blink'])
        else:
            if len(self.stack) != self.limit:
                print("|            |")
            print(" ------------")
        for element in newStack:
            print(f"|     {element}     |")
            print(" ------------")
        # print(self.stack)
from my_module.navigation import Banner
banner=Banner()
banner.nav('STACK','LIST')
stack = Stack()
while True:
    print("""
    | 1 > PUSH into STACK
    | 2 > POP from STACK
    | 3 > Dispaly STACk
    | 4 > Quit
    """)
    opt=int(input(">>> "))
    if opt==1:
        stack.push()
    elif opt==2:
        stack.pop_element()
    elif opt==3:
        stack.display()
    else:
        again=input("Do you want to exit Y/N ? ").lower()
        if again == 'y':
            break
        else:
            continue