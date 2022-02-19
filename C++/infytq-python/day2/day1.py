# Single line comment

"""
This is multiline comment
line2
line3

"""


multilineString="""
THis is data 1

This is data 2
"""

city="Noida"
citY="Nodia"

ab="it\"s me"
ab1='it\'s me'
print(city)


# String formating
str_1="hello"
str_2="learners"
str_3=str_1+str_2 # string concatinate
print(str_3)
print("Welcome "+str_2) # string concatinate
 # unexpected indent space not allowed during declartion


######################################################################
age=24
# print(str_1+age) #can only concatenate str(not"int") to str
print(str_1+str(age)) #convert number to string

# f string method // for converting any natural number to string
print(f"Welcome {{age}}")

#placeholder
print(f"{str_1} {age}") 


# Limitation of f string <- value could not be change
name="Ria"
greet= f"how are you {name}"
print(greet) # output is how are you Ria

name="Raj"
print(greet) # output is how are you Ria


############### Format Method ##################
new_greet="how are you {}" # {} <- put value of name
print(new_greet.format(name)) # output - how are you Raj 


book_name='python'
year='2010'
purchase="i have {} purchased {}" # multiple value put on formate
print(purchase.format(book_name,year))

###################### formate use in "Name indexes"#################
my_purchase="i have {fruit_name} quantity in {kg}"
print(my_purchase.format(fruit_name="apple",kg=10)) # name index

# float point precision using % Operator
print("The value value of pi is : %")

#      **high precidance
print(3*1**3) # result 3
str="""a'h"""
print(str) # output = a'h

