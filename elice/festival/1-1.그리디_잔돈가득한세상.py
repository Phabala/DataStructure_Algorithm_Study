N = int(input())
if N == 10000:
    print(0)
else:
    N = str(N)
    N = list(N)
    sum = 0
    for e in N:
        if e == '0':
            pass
        else:
            num = int(e)
            sum += (9-num)
    print(sum)
