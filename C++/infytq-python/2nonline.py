"""
You are given an integer K. Find the smallest number N such that N has exactly K digits and none of the digits in N is 0. Also, the product of digits in number N is greater than or equal to the sum of digits in number N.

Input Format

The first line contains an integer K.
For Example:
Input1
1
Output1
1

Input2
3
Output2
6

Explaination For the example , N = 1 is the smallest number that has a product of digits i.e., 1 greater than or equal to the sum of digits i.e., 1.

For the second example, N = 123 is the smallest number that has a product of digits i.e., 6 greater than or equal to the sum of digits i.e., 6.

Constraints

1 ≤ K ≤ 5 ⋅ 10 ^ 4

Output Format

For each test case in a new line, print the smallest number N that satisfies the given condition.

Sample Input 0

1

Sample Output 0

1

"""

n=2
nums=[1,2,3,4,5,6,7,8,9]
sum=0
mul=1
rng=0
for i in range(0,n):
    for()

while True:
    sum=0
    mul=1
    if n+rng==9:
        break
    else:
        dig=[]
        for i in range(rng,n+rng):
            dig.append(nums[i])
            sum+=nums[i]
            mul*=nums[i]
        if mul>=sum:
            print(dig)
            break 
    rng+=1

print(mul)
    

# print(dig)
# print(sum)
# print(mul)