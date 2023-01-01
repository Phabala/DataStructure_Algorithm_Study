import sys
sys.stdin = open("D:/gihong/tmpDev/DataStructure_Algorithm_Study/SwExpertAcademy/PreCourse/알고리즘(난이도_중)/input.txt", "r")
T = int(input())
for test_case in range(1, T+1):
    aNum, bNum = map(int, input().split())
    aList = list(map(int, input().split()))
    bList = list(map(int, input().split()))
    
    if aNum >= bNum: # 긴 리스트와 짧은 리스트 선언, 편의를 위해 길이도 선언해줌
        longList, shortList = aList, bList
        longNum, shortNum = aNum, bNum
    else:
        longList, shortList = bList, aList
        longNum, shortNum = bNum, aNum
        
    ansList = []
    for i in range(longNum-shortNum+1):
        tmpAns = 0
        for j in range(shortNum):
            tmpAns += (shortList[j] * longList[i+j])
        ansList.append(tmpAns)
    print('#', test_case, ' ', max(ansList), sep='')
    

    # 길이가 작은 리스트와 큰 리스트를 선별한다.
    # 길이가 큰 리스트에서 작은 길이만큼 잘라서, 길이의 차이 +1번 만큼 인덱스를 바꿔가며 반복한다.
    # 곱한 값들을 더한 리스트를 만든다
    # 그 리스트의 Max 를 구한다.