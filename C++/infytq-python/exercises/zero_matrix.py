from sympy import rotations


def setZero(matrix,size):
    pass

def print_matrix(matrix,size):
    for row in range(size):
        for col in range(size):
            print(matrix[row][col],end=" ")
        print()

matrix=[
    [1,2,3,0],
    [5,2,4,4],
    [9,0,8,4],
    [5,2,2,4],
]
size=4

setZero(matrix,size)

print("----------- Normal Matrix -----------")
print_matrix(matrix,size)

print("----------- REVERSE/ Rotated -----------")
# reverse

# creation of zeros matrix
# rotated_matrix=[[0]*4]*4
# rotated_matrix=[[0]*size]*size
rotated_matrix=matrix.copy() #opy one matrix to another matrix
for row in range(size):
    for col in range(size):
        rotated_matrix[row][col]=matrix[col][row]

# print_matrix(matrix,size)
# print_matrix(rotated_matrix,size)
print(matrix)
print(rotated_matrix)


# column and rows position will be prited
print("------------Row and column will be printed------------------")
for row in range(size):
    for col in range(size):
        print(f"({row},{col}) ",end="")
    print()