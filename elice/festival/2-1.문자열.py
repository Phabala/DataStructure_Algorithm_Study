word = input()
countList = dict()

for cha in word:
    if cha in countList:
        countList[cha] += 1
    else:
        countList[cha] = 0
        countList[cha] += 1

print(*[key for key, value in countList.items() if max(countList.values()) == value], sep='')