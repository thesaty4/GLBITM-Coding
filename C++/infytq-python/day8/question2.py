# product of three positive integer
var=True
flag=False
cond=7
while var:

    number=input("Input Three number Seperated by :").split(",")
    if(int(number[0])==cond):
        print(int(number[1])*int(number[2]))
        flag=True
    if(int(number[1])==cond):
        print(int(number[2]))
        flag=True
    if(int(number[2])==cond):
        print(-1)
        flag=True

    if flag==False:
        print(int(number[0])*int(number[1])*int(number[2]))
    
    inp=input("Do you want to check again y or n: ")
    if inp=='y' or inp=='Y':
        var=True
    else:
        var=False
