import sys
sys.stdin = open("D:/gihong/tmpDev/DataStructure_Algorithm_Study/SwExpertAcademy/PreCourse/알고리즘(난이도_중)/input.txt", "r")
T = int(input())
for test_case in range(1, T+1):
    garbage = int(input())
    scores = list(map(int, input().split()))
    
    modeQuantity = 0
    modeScore = 0
    for score in range(0, 101):
        tmpQuantity = scores.count(score)
        if (modeQuantity <= tmpQuantity) & (modeScore < score):
            modeQuantity, modeScore = tmpQuantity, score
    
    print('#', test_case, ' ', modeScore, sep='')