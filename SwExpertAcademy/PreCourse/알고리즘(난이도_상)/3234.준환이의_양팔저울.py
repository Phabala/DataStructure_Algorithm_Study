import sys
from itertools import *
sys.stdin = open("D:/gihong/tmpDev/DataStructure_Algorithm_Study/SwExpertAcademy/PreCourse/알고리즘(난이도_중)/input.txt", "r")
T = int(input())
for test_case in range(1, T+1):
    quantity = int(input())
    weightList = list(map(int, input().split()))
    
    combs = [] # 조합 만들기
    for q in range(quantity+1):
        tmpCombs = list(combinations(weightList, q))
        for c in tmpCombs:
            combs.append(c)
    
    # 왼쪽 오른쪽에 들어갈 경우의 수들을 담기 (같은 경우의 수면 인덱스가 같음)
    bigLeft = []
    smallRight = []
    for i in range(len(combs)//2):
        sum1 = sum(combs[i])
        sum2 = sum(combs[len(combs)-i-1]) # 겹치는거 지울 차례
        
        if sum1 < sum2:
            smallRight.append(combs[i])
            bigLeft.append(combs[len(combs)-i-1])
        elif sum1 > sum2:
            smallRight.append(combs[len(combs)-i-1])
            bigLeft.append(combs[i])
        else: # sum1 == sum2
            smallRight.append(combs[i])
            bigLeft.append(combs[len(combs)-i-1])
            smallRight.append(combs[len(combs)-i-1])
            bigLeft.append(combs[i])
            
    print(bigLeft, smallRight)
        
        
    # weightPermutations = list(permutations(weightList, quantity))
    # print(weightPermutations)
    # print(sys.getsizeof(weightPermutations))
    
    # 먼저, 무게를 만족하는 두 조합을 만든다.
    # 그리고 나서, 왼쪽 오른쪽에 분배한다.
    # 나눠진 무게 조합을, 위치 경우의 수로 다시 나눈다.
    
    # 잘못품, 올리는 순서를 고려해야 함.