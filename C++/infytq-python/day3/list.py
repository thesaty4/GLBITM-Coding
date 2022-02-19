# List is mutable <= here we can change
from audioop import reverse


fruit=['A','B','C',0,4.5,"Satya"]
print(fruit) # ['A', 'B', 'C', 0, 4.5, 'Satya']
print(fruit[4]) # Access

# Defining list within list
      #----0-------1---
fruit=[['D',4],['E',5]]
      #  0  1    0  1
print(fruit[0]) # ['D', 4]
print(fruit[0][1]) # 4

print(fruit[-1][1])

# APPEND SOMTHING IN THE LIST
fruit.append("data")
print(fruit)
# ################ Value can be repead in the list #######################

ls=[4,5,6,4]
print(ls)
ls.append(0)
print(ls)


# remove somthing from list
fruit=['a','b','c']
fruit.remove('a')
print(fruit)
#####################################################################################################################
# ####################append/extend/insert three method are used for inserting data into list######################33
#####################################################################################################################

print(fruit)
fruit.insert(0,'E') 
print(fruit)


no=[1,2,3]
no.extend(fruit)
print(no)

# String can not have any reverse function

# Sorting
fruit=["n","a"]
fruits=sorted(fruit)
print(fruits)


# find minimum and maxmimum element
num=[1,2,3,4,5,666,66,4]
print(f'min element : {min(num)}')
print(f'max element : {max(num)}')

# remove/count/pop/copy/clear <- do prepare yourself
a=5  #class
print(int.__int__(a))