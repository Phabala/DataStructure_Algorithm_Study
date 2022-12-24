word = input()
countList = [0 for _ in range(26)]

# for cha in word:
#     word[ord(cha)-97] += 1

for cha in word:
    idx = ord(cha) - 97
    countList[idx] += 1

print(*countList)