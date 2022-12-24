def method(n, m):
    # 리스트 초기세팅
    lst = []
    initList = []
    lastList = []
    for _ in range(m):
        initList.append(_+1)
    
    for _ in range(m, 0, -1):
        lastList.append(n+1 - _)
    print(lastList)

    lst.append(initList)

    # header 선언 (이걸 header말고 뭐라고 불러야하지?), header가 리스트 여기저기를 인덱스로서 움직이며 작업한다.
    header = m-1
    initHeader = m-1 # 현재 header가 어디있는지 비교해가며 작업을 수행하기 위해 선언해준다.

    # 알고리즘 작성
    while (lst[-1] != lastList):

        # lst 맨 끝에서 작업할 리스트 가져오기
        tmpList = lst[-1]

        if tmpList[header] != m-(initHeader - header): # header의 위치에 따라 숫자 조건이 달라진다.
            tmpList[header] += 1 # header 위치에서 해당 숫자가 가질 수 있는 최대값이 아니라면 1을 더한다.
            lst.append(tmpList)

        elif tmpList[header] == m-(initHeader - header) & tmpList[header-1] != m-(initHeader - header): # header위치는 최대인데 그 왼쪽이 최대가 아니라면
            tmpList[header-1] += 1
            tmpList[header] == tmpList[header-1] + 1
            lst.append(tmpList)
        # else: # 이 조건문은 이와 같다. elif tmpList[header] == m-(initHeader - header) & tmpList[header-1] == m-(initHeader - header) # header위치와 그 왼쪽이 최대라면
            # tmpList[header] == tmpList
if __name__ == "__main__":
    N, M = map(int, input().split())
    method(N, M)


# 1 2 3 4
# 1 2 3 5
# 1 2 3 6
# 1 2 3 7
# 1 2 3 8
# 1 3 4 5
# 1 3 4 6
# 1 3 4 7
# 1 3 4 8
# 1 3 5 6
# 1 3 5 7
# 1 3 5 8
# 1 3 6 7
# 1 3 6 8
# 1 3 7 8
# 1 4 5 6
# 1 4 5 7
# 1 4 5 8
# 1 4 6 7
# 1 4 6 8
# 1 4 7 8
# 1 5 6 7
# 1 5 6 8
# 1 5 7 8
# 1 6 7 8
# 2 3 4 5
# 2 3 4 6 ...