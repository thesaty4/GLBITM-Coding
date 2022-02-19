from turtle import clear


class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class LinkedList:
    def __init__(self):
        self.head=None
        self.front=None

    def add(self):
        data=input("Enter element : ")
        if self.head==None:
            # If nothing in the head, its mean no data so we have to create node and liked with head
            node = Node(data)
            self.head=node
            self.front=node
        else:
            node = Node(data)
            self.front.next=node
            self.front=node
    def search(self):
        if self.head==None:
            print("Linked list is empty ")
        else:
            elem = input("Which element you want to search ? ")
            temp=self.head
            # Searching
            while temp.next != None:
                if temp.data == elem:
                    print("I found key !")
                    break
                temp=temp.next 
            else:
                print("Key Not found !")

    # def delete(self):
    #     if self.head == None:
    #         print("Linked list is empty !")
    #     else:
    #         inp = input("Enter data for deletion : ")
    #         # do search operation
    #         temp=self.head
    #         while temp.next != None:
    #             if inp == temp.next.data:
    #                 # key found delete this key
    #                 newTemp = temp.next
    #                 del temp.next
    #                 break
    #             temp=temp.next
    #         else:
    #             print("Sorry key is not present ! ")

    def print(self):
        if self.head==None:
            print("Linked list is empty ! ")
        else:
            temp=self.head
            while temp:
                print(temp.data, end=" ")
                temp=temp.next

make_linkedList=LinkedList()
while True:
    print ("""
    | 1 > Add Element
    | 2 > Display
    | 3 > Searching
    | 4 > Quit
    """)
    opt = int(input())
    if opt == 1:
        make_linkedList.add()
    elif opt == 2:
        make_linkedList.print()
    elif opt == 3:
        make_linkedList.search()
    # elif opt == 4:
    #     make_linkedList.delete()
    else:
        break

