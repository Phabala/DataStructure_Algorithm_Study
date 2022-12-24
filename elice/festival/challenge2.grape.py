lst = []
r, N = map(int, input().split())

for _ in range(N-1):
    tmpList = []
    tmpa, tmpb = map(int, input().split())
    tmpList.append(tmpa)
    tmpList.append(tmpb)
    lst.append(tmpList)

nodeList = [[r]]

for line in lst:
    ck = 0
    for node in nodeList:
        if node[0] == line[0]:
            node.append(line[1])
            ck += 1
    if ck == 0:
        nodeList.append(line)

count = {}
for node in nodeList[1:]:
    for num in node:
        if num in count:
            count[num] += 1
        else:
            count[num] = 1
        
        
        

print(r, N)
print(lst)
print(nodeList)
print(count)

# 내가 원하는 그림:
# [0, 1, 2, 3], [1, 4, 5], [2, 6], [3, 7, 8, 9], [5, 10, 11], [7, 12], [8, 13], [12, 14, 15]]