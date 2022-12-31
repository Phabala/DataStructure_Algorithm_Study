N = int(input())
lst = list(map(int, input().split()))
lst.sort()
middleIndex = int((N-1)/2)
middleNum = lst[middleIndex]
print(middleNum)