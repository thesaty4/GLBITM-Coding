# find the sum of the series upto n term
loop=int(input("Enter Number : "))
to_be_append=input("Enter a number to be append : ")
sequence=[]
num=''
sum=0
for i in range(1,loop+1):
    num+=to_be_append
    sequence.append(num)
    sum+=int(num)
print(sum)
print(f'Generated Sequence are : {sequence}')
