# 생성자 = M
# 분해합 = N

# 분해합 N이 될 때 까지 계속 구해봐야 할 거 같은데
# i가 일의자리일 때 (i<10^1)
# i가 십의자리일 때 (i<10^2)
# i가 백의자리일 때 ...
# i가 10^6 밑일 때

def decomposition():
    values = []
    m = int(input())
    for i in range(1, m):
        if i < 10:
            if 2 * i == m:
                values.append(i)
        elif i < 100:
            lst = str(i)
            if int(lst[0]) + int(lst[1]) + i == m:
                values.append(i)
        elif i < 1000:
            lst = str(i)
            if int(lst[0]) + int(lst[1]) + int(lst[2]) + i == m:
                values.append(i)
        elif i < 10000:
            lst = str(i)
            if int(lst[0]) + int(lst[1]) + int(lst[2]) + int(lst[3]) + i == m:
                values.append(i)
        elif i < 100000:
            lst = str(i)
            if int(lst[0]) + int(lst[1]) + int(lst[2]) + int(lst[3]) + int(lst[4]) + i == m:
                values.append(i)
        elif i < 1000000:
            lst = str(i)
            if int(lst[0]) + int(lst[1]) + int(lst[2]) + int(lst[3]) + int(lst[4]) + int(lst[5]) + i == m:
                values.append(i)
        elif i == 1000000:
            lst = str(i)
            if int(lst[0]) + int(lst[1]) + int(lst[2]) + int(lst[3]) + int(lst[4]) + int(lst[5]) + int(lst[6]) + i == m:
                values.append(i)

    values.sort()
    print(values)
    if len(values) == 0:
        return 0
    else:
        return values[0]


if __name__ == '__main__':
    print(decomposition())