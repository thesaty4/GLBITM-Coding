class Node:
    def __init__(self,data):
        self.pre=None
        self.data=data
        self.next=None

class DoublyLinkedlist:
    def __init__(self) -> None:
        self.head=None
        self.current=None

    def add(self):
        newdata = input("Enter your data : ")
        node = Node(newdata)
        if self.head==None:
            self.head=node
            self.current=self.head
        else:
            self.current.next=node
            node.pre=self.current
            self.current=node
    def printList(self):
        if self.head==None:
            print("Linked List is empty")
        else:
            temp=self.head
            while temp:
                print(temp.data,end=" ")
                temp=temp.next

    def search(self):
        if self.head==None:
            print("Doubly Linkedlist is empty !")
        else:
            key = input("Enter any data for searching : ")
            temp=self.head
            while temp.next != None:
                if temp.data == key:
                    print("I Found key")
                    temp=temp.next
                    break
                
            else:
                print("Key not found")


dLinkedList = DoublyLinkedlist()  
while True:
    print("""
    Which Operation you want to run? 
    | 1> Add
    | 2> Dispaly
    | 3> Search
    | 4> Quit
    """)
    opt = int(input("Enter Option >> "))
    if opt==1:
        dLinkedList.add()
    elif opt==2:
        dLinkedList.printList()
    elif opt==3:
        dLinkedList.search()
    else:
        break
            

