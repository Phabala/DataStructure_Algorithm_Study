import math

N, K = map(int, input().split())

matrix = [[0 for sex in range(2)] for grade in range(7)] # 열: 성별, 행: 학년(1행은 공백)
for student in range(N):
    tmpSex, tmpGrade = map(int, input().split())
    matrix[tmpGrade][tmpSex] += 1

room = 0
for grade in range(1, len(matrix)):
    for sex in range(len(matrix[grade])):
        room += math.ceil((matrix[grade][sex])/K)

print(room)