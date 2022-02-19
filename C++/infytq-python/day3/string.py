# # STRING IS SEQUENCE OF CHARECTER
# from msilib import sequence


# string="This is my python text"
# # length of string is 22
# print(len(string))

# # ACCESSING
# print(string[1]) #OUTPUT - h

# # string index out of range Overflow condition
# # print(string[33]) 

# print(string[-1]) # Accessing last element of 

# # checking type
# print(type(string)) # output <class 'str'>

# print(type(string)==type(string)) # Resutl True

# # couting word in string
# print(string.count('t'))

# # convert in uppercase
# print(string.upper())

# # convert in lower
# print(string.lower())

# # sequence - string
# # data type - string, list, tuple, dictionary
# # string - immutable type

# # string[1]="A" # Output -> TypeError: 'str' object does not support item assignment
# ###############################################################################################
# ################################ In the python everythig is class #############################
# ###############################################################################################

# string="Overwrite" # it can be possible
# print(string)

# string="veoer o"
# print(string.index("o")) #output = 2

# # string element deletion
# # del(string[2]) #TypeError: 'str' object doesn't support item deletion

# # You can delete entire string
# # del string
# # ###################### object deleted #####################
# # print(string) #name 'string' is not defined
# ###################### object deleted #####################


# # join and split
# string2="hello this"
# string='-'.join(string2) # OUTPUT h-e-l-l-o- -t-h-i-s
# print(string)


# # split string
# string="Hello everyone"
# String1=string.split("o") # split from o and make list ['Hell', ' every', 'ne']
# # You can also do with space or any charecter
# print(String1)

# print(String1[0][0])

# # Important question-------------------------
# # Take input in single line and print deffrent line
# # first,last=input("Enter your name : ").split(",")
# # print(f'Your First name {first}')
# # print(f'Your Last name {last}')



# # Question
# # """Create a string made of the first, middle and last character"""
# # Pragati --- Pgi

s="satya"
print(s[0]+""+s[int(len(s)/2)]+""+s[-1])