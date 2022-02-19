bike = {'ok','ok','ok','ok','ok','ok','faulty','ok','ok'}
for x in bike:
    if x=='faulty':
        continue
    print(f'bike is {x}')
else:
    print('all bike sold successfully')


for x in bike:
    if x=='faulty':
        break
    print(f'bike is {x}')
else: #whenever our for loop successfull then it will run otherwise not run
    print('all bike sold successfully')

# Nested Looping
# find prime no between 2 to 10
flag=0
for num in range(2,10):
    for val in range(2,(num//2)+1):
        if num%val == 0:
            print(f'{num} is not prime number')
            break
    else: # if nothing intrupt
        print(f'{num} is prime number')

