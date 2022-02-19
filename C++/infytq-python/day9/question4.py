string='knBCcba'
lower=''
upper=''
for char in string:
    if char.isalpha():
        lower+=char
    else:
        upper+=char

print(f"Sorted String such that lower char : {lower}{upper}")

# 2nd way
string='knBCcba'
lower=[]
upper=[]
for char in string:
    if char.islower():
        lower.append(char)
    else:
        upper.append(char)
lower.extend(upper)

print(f"Sorted String such that lower char : {lower}")

# string=''
# string[0]='satya' #ypeError: 'str' object does not support item assignment
# print(string) 