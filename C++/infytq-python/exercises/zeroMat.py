matrix=[
    [0,2,3,0],
    [5,2,4,4],
    [9,1,8,4],
    [5,2,2,4],
]
size=4

def printMatrix(matrix,size):
    for row in range(size):
        for col in range(size):
            print(matrix[row][col],end=" ")
        print()

def changeMatrix():
    global matrix,size
    zeros_row=[False]*size
    zeros_col=[False]*size 
    for row in range(size):
        for col in range(size):
            if matrix[row][col]==0:
                zeros_row[row]=True 
                zeros_col[col]=True


    for row in range(size):
        for col in range(size):
            if zeros_row[row]:
                matrix[row][col]=0

    for row in range(size):
        for col in range(size):
            if zeros_col[col]:
                matrix[row][col]=0 
    print(zeros_row)
    print(zeros_col)



print("------------------- Normal matrix ---------------------")
printMatrix(matrix,size)
print()
print("------------------- Zeros matrix ---------------------")
changeMatrix()
printMatrix(matrix,size)


