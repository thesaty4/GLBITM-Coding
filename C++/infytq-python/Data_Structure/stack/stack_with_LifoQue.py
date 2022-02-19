"""
Implementation of stack using MODULE
# PROPERTY OF STACK, LIFO
"""
from queue import LifoQueue
from my_module.navigation import *
banner=Banner()
banner.nav('STACK','LifoQue')
limit = int(input("Enter the limit of stack >> "))
stack = LifoQueue(maxsize=limit)
# Method will be used : put() and get()
while True:
    print("""
    | 1 > PUSH into STACK
    | 2 > POP from STACK
    | 3 > Dispaly STACk
    | 4 > Quit
    """)
    opt=int(input(">>> "))
    if opt==1:
        if not stack.full():
            stack.put_nowait(input("| Enter the Element : "))
        else:
            print("Stack is full ! ")
    elif opt==2:
        if not stack.empty():
            popped = stack.get_nowait()
            print(f'{popped} is popped from stack')
        else:
            print(f"Stack is empty ! ")
    elif opt==3:
        print(stack)
    else:
        again=input("Do you want to exit Y/N ? ").lower()
        if again == 'y':
            break
        else:
            continue
