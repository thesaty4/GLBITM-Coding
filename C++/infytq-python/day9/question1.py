# print string who present in even index
string="THIS IS AN STRING"
print(string[::2])

newString=''
for i in range(0,len(string)):
    if i%2==0:
        newString+=string[i]
print(newString)

newString=''
for i in range(0,len(string),2):
    newString+=string[i]
print(newString)



