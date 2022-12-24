A, B = map(int, input().split())
A = str(A)
B = str(B)

if len(A) >= len(B):
    bignum = A
    smallnum = B
else:
    bignum = B
    smallnum = A

tmpC = []

for idx in range(len(smallnum)):
    for size in range((len(smallnum) - idx)):
        if smallnum[idx:idx+size+1] in bignum:
            tmpC.append(smallnum[idx:idx+size+1])
        print(idx, size+1)
print(tmpC)

maxlen = 0
for i in tmpC:
    if len(str(i)) >= maxlen:
        maxlen = len(str(i))
print(maxlen)

K = (len(A) - maxlen) + (len(B) - maxlen)
print(K)