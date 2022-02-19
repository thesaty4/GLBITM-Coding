from re import A


x=10 # global var

# Global Keyword
def test():
    # x=x+1 # global variable read only
    # if you want to use global variable into your function then you have to use global keyword
    global x
    x=x+1
    # x=15 #local variable
    print(x)
test()
print(x)


# default variable 
#       possional parameter\

# def greet(a=10,y): Error
def greet(a=10):
    print(a)

greet() # 10
greet(299) # 299


def add(x=5,y=7):
    print(x+y)


# add(x=6,8) # Error : possitiona argument cannot apear after keyword argument
add(8,y=8) # keyword argument  can be appear after possitiona argument 



# we dont know how much argument pass so here
def name(*a):
    print(type(a)) # tuple
    print(a)

name(1,4,3,4,5)
name(1,2,3,4,3,2,3,45)
# <class 'tuple'>
# (1, 4, 3, 4, 5)
# <class 'tuple'>
# (1, 2, 3, 4, 3, 2, 3, 45)


# kwarg #Dictionary
def fn(**kwarg):
    print(type(kwarg))
    print(kwarg)
    
    # how to access keys and value from kwarg| Dictonary 
    for key,value in kwarg.items():
        print("Key ",key,end=" ")
        print("Value ",value,end=" ")
        print("\n")

# if you use **kwarg/ it can store
fn(x=10,y=20)
fn()

z=6
def add(x,y=z):
    print(x+y)
add(5) # 11
z=10

# global z # We can not use global keyword outside of method
add(5) # 11



def gl():
    global z
    z=44

print(z) # 10


