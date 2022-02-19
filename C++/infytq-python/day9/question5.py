# count all letters, digits and special  froma given string
str=input("Enter any string : ")
a=0
n=0
sym=0
sum=0
for s in str:
    if s.isalpha():
        a+=1
    elif s.isnumeric():
        n+=1
        sum+=int(s)
    else:
        sym+=1
print(f"Number is : {n}, Special Symbole is : {sym}, letters is : {a}")
print(f"Sum of number is {sum}, Average of number is : {sum/n}")
# Optimal Solution is