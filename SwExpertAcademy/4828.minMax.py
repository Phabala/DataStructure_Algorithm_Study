inputText = open("./sample_input.txt", "r")

T = int(input())
lst = []
for t in range(T):
    N = int(input())
    tmpList = list(map(int,input().split()))
    tmpList.sort()
    lst.append(tmpList)

for l in lst:
    print(l[-1] - l[0])