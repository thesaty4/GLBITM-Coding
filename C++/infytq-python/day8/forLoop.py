from ntpath import join


rng=set(range(1,10))
print(rng) #{1, 2, 3, 4, 5, 6, 7, 8, 9}

rng=tuple(range(1,10))
print(rng) #(1, 2, 3, 4, 5, 6, 7, 8, 9)

rng=list(range(1,10))
print(rng) #[1, 2, 3, 4, 5, 6, 7, 8, 9]

s="GLBAJA"
for i in s:
    str=i
    # s.join("str")

print(s)


# num=list(range(1,10))
# for val in range(1,10):
#     print(f'{val*2}')
    
num=[1,4,6,8,9]
for val in num:
    print(f'Square of {val} : {val**2}')
