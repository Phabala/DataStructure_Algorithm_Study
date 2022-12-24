def isitPrime(k):
    if k==2 or k==3: return True
    if k%2==0 or k<2: return False
    for i in range(3, int(k**0.5)+1, 2):
        if k%i==0:
            return False

    return True

def isNextLevel(n, m):
    strN = list(str(n))
    strM = list(str(m))
    sum = 0
    
    for i in range(4):
        if strN[i] == strM[i]:
            sum += 1
    
    if sum == 3:
        return True
    else:
        return False

if __name__ == "__main__":
    A, B = map(int, input().split())
    
    primeList = []
    for num in range(1000, 10000):
        if isitPrime(num) == True:
            primeList.append(num)
    
    levelList = [[A]]
    while True:
        if B in levelList[-1]:
            print(len(levelList))
            break
        else:
            tmpLevel = []
            for i in range(len(primeList)):
                if isNextLevel(A, primeList[i]):
                    tmpLevel.append(primeList[i])
                    primeList[i] = -1
            while -1 in primeList:
                primeList.remove(-1)
            levelList.append(tmpLevel)
                
# 만약 같은 수라면 level0
# 하나만 바꾸면 되면 level1
# 두개 바꾸면 되면 level2
# 세개 바꾸면 되면 level3
# 네개 바꾸면 되면 level4 ...