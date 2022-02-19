#destructring
currencies=5,20
rs,usd=currencies #destructring

Friends=[('A',5),('B',6),('C',7),('D',9)]
for x in Friends:
    print(x)
    # output 
    # ('A', 5)
    # ('B', 6)
    # ('C', 7)
    # ('D', 9)

# Destructuring
#OR => for name,age in Friends:
# Friends=[('A',5),(6),('C',7),('D',9)]
# for x in Friends:
#     name,age=x #cannot unpack non-iterable int object
#     print(name, age) # <---- SAME AS print(x[0],x[1])


# iteration of dictionary
# -----------------------------------------------
# How to get Key from value
friends={'A':6,'B':9,'C':8,'D':7}
for key in friends:
    print(key) # All key will printed

friends={'A':6,'B':9,'C':8,'D':7}
for key in friends.keys():
    print(key) # All key will printed
# -----------------------------------------------

# How to get values from value
for value in friends.values():
    print(value) # All Values will printed

# Want print key and value both then
for key,value in friends.items():
    print(key,value) # All Key and Value will printed 
    

# value = 'satya\0'
