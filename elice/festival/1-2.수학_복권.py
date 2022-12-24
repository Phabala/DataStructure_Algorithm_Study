if __name__ == "__main__":
    N = int(input())
    lst = list(map(int, input().split()))
    lst.sort()

    if N == 1:
        print(-1)
    else:
        tmp1 = lst[-1]
        tmp2 = lst[-2]
        lst.pop()
        lst.pop()
        lst.append(tmp1)
        lst.append(tmp2)
        print(*lst)