"""
Implementation of stack using MODULE
# PROPERTY OF STACK, LIFO
"""
from collections import deque
from my_module.navigation import *
banner=Banner()
banner.nav('STACK','Deque')
limit = int(input("Enter the limit of stack >> "))
stack = deque(maxlen=limit+1)
while True:
    print("""
    | 1 > PUSH into STACK
    | 2 > POP from STACK
    | 3 > Dispaly STACk
    | 4 > Quit
    """)
    opt=int(input(">>> "))
    if opt==1:
        if stack:
            print("Stack is full !")
        else:
            stack.append(input("| Enter the Element : "))
    elif opt==2:
        try:
            popped = stack.pop()
            print(f'{popped} is popped from stack')
        except:
            print(f"Stack is empty ! ")
    elif opt==3:
        print(stack)
    else:
        again=input("Do you want to exit Y/N ? ").lower()
        if again == 'y':
            break
        else:
            continue
