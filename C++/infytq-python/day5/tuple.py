# what is use of tuple 
# where we use tuple
# tuple can't be change
# tuple is mutable data variable

from asyncio import futures
from textwrap import indent


fruits="Apple","Orange"
fruits2=("Apple","Orange")
print(fruits)

# create tuple in single element
Tup1="Kiwi"
print(type(Tup1)) # <class 'str'>

# create tuple with single value
Tup2=("Kiwi",) 
print(type(Tup2)) # <class 'tuple'>

# add values to tuple
print(fruits) # ('Apple', 'Orange')

print(fruits+(1,23,4)) #('Apple', 'Orange', 1, 23, 4)

del fruits
# print(fruits) # name 'fruits' is not defined

# del fruits2[3] #TypeError: 'tuple' object doesn't support item deletion

# fruits2[3]="d" #TypeError: 'tuple' object does not support item assignment

# #################### can be concatnate two
data=(1,2,3,4,56,3,2,1,22,344)
print(fruits2[:])
print(min(data))
print(max(data))
print(data.index(1))