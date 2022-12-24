# 1. input 을 받는다. (N까지의 장식, M개)
# 2. 출력한다.

def method(n, m):
    lst = []
    for _ in range(m):
        lst.append(1)
    
    header = m-1

    while(True):
        if header == m-1:
            print(*lst)

        if lst.count(n) == m:
            break

        if (lst[header] == n) & (lst[header-1] != n):
            lst[header] = 1
            lst[header-1] += 1

            if header != m-1:
                header = m-1

            print(*lst)

        elif (lst[header] == n) & (lst[header-1] == n):
            lst[header] = 1
            header -= 1
            continue
            
        lst[header] += 1
        header == m-1

if __name__ == "__main__" :
    N, M = map(int, input().split())
    method(N, M)

# 1 1 1 1
# 1 1 1 2
# 1 1 1 3
# 1 1 1 4
# 1 1 2 1
# 1 1 2 2 
# 1 1 2 3 
# 1 1 2 4
# 1 1 3 1
# 1 1 3 2
# 1 1 3 3
# 1 1 3 4
# 1 1 4 1
# 1 1 4 2
# 1 1 4 3
# 1 1 4 4
# 1 2 1 1
# 1 2 1 2
