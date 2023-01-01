import sys
sys.stdin = open("D:/gihong/tmpDev/DataStructure_Algorithm_Study/SwExpertAcademy/PreCourse/알고리즘(난이도_중)/input.txt", "r")
T = int(input())
for test_case in range(1, T+1):
    N = int(input())

    matrix = []
    for row in range(N):
        tmpMatrix = list(map(int, input().split()))
        matrix.append(tmpMatrix)

    def rotate90(matrix):
        rotatedMatrix = []
        for col in range(0, N):
            tmp = []
            for row in range(N-1, -1, -1):
                tmp.append(matrix[row][col])
            rotatedMatrix.append(tmp)
        return rotatedMatrix

    matrix90 = rotate90(matrix)
    matrix180 = rotate90(matrix90)
    matrix270 = rotate90(matrix180)

    print('#', test_case, sep='')
    for row in range(N):
        print(''.join(str(n) for n in matrix90[row]), ''.join(str(n) for n in matrix180[row]), ''.join(str(n) for n in matrix270[row]), sep=' ')

    # print(matrix90)
    # print(matrix180)
    # print(matrix270)


# 20 10 00  22 12 02  02 12 22
# 21 11 01  12 11 10  01 11 21
# 22 12 02  02 01 00  00 10 20

# row
# 210 210 012
# 210 111 012
# 210 000 012

# col
# 000 222 222
# 111 210 111
# 222 210 000
