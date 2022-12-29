for test_case in range(10):
    n = int(input())
    matrix = []
    for row in range(100):
        tmpMatrix = list(map(int, input().split()))
        matrix.append(tmpMatrix)

    # 2차원 리스트 행렬 변환
    T_matrix = list(map(list, zip(*matrix)))

    rowSumList = []
    for row in matrix:
        tmpRowSum = sum(row)
        rowSumList.append(tmpRowSum)

    colSumList = []
    for col in T_matrix:
        tmpColSum = sum(col)
        colSumList.append(tmpColSum)

    diagnolList = []
    for idx in range(100):
        diagnolList.append(matrix[idx][idx])

    T_diagnolList = []
    for idx in range(100):
        T_diagnolList.append(matrix[99-idx][idx])

    sumDiagnolList = sum(diagnolList)  # 정방향 대각선 합
    T_sumDiagnolList = sum(T_diagnolList)  # 역방향 대각선 합
    maxRowSumList = max(rowSumList)  # 가로값 합들의 max
    maxColSumList = max(colSumList)  # 세로값 합들의 max

    maxValue = max(sumDiagnolList, T_sumDiagnolList,
                   maxRowSumList, maxColSumList)  # 각 값들의 max

    print('#', n, ' ', maxValue, sep='')
# 가로: 얘는 그냥 리스트들의 sum들의 max를 구하면 된다.
# 세로: row와 column을 뒤바꿔서 리스트를 만들어준 다음, sum들의 max를 구함.
# 대각선 정방향: 인덱스 row와 col 값이 같은 값들을 더함
# 대각선 역방향: rol + col = 99 인 값들을 더함.
