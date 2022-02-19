"""# make function using lambda function

function = lambda argument1,arguement2:operation
# Lambda return function
"""
add = lambda x,y:x+y
mod = lambda x,y:x%y
mul = lambda x,y:x*y
div = lambda x,y:x/y
n1=3
n2=2
print(f"Sum of two num n1={n1}, n2={n2}   : {add(n1,n2)}")
print(f"Mod of two num n1={n1}, n2={n2}   : {mod(n1,n2)}")
print(f"Mul of two num n1={n1}, n2={n2}   : {mul(n1,n2)}")
print(f"Div of two num n1={n1}, n2={n2}   : {div(n1,n2)}")

# Sort a list according to first value using lambda
list=[(1,3),(5,3),(0,1),(4,1)]
list.sort(key=lambda x:x[0])
print(list)


# Sort a list according to last value using lambda
list=[(1,3),(5,3),(0,1),(4,1)]
list.sort(key=lambda x:x[-1])
print(list)

