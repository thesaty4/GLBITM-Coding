def printMatrix(matrix,size):
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

newMatrix=[]
for row in range(size):
    subMat=[]
    for col in range(size):
        subMat.append(matrix[col][row])
        # print(matrix[row][col],end=" ")
    newMatrix.append(subMat)
    # print()

printMatrix(matrix,size)
print()
printMatrix(newMatrix,size)


