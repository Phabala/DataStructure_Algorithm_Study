T = int(input())
for test_case in range(1, T+1):
    sudoku = []
    for _ in range(9): # 스도쿠 리스트를 만드는 과정
        tmpSudoku = list(map(int, input().split()))
        sudoku.append(tmpSudoku)
        
    def check(lst): # 2차원 리스트가 들어가야 한다
        for idx in range(len(lst)):
            for num in range(1, 10):
                if lst[idx].count(num) == 1: # 1~9 값의 count값이 하나씩 1이 나온다면 올바르다.
                    pass
                else:
                    return 0 # 스도쿠가 아니라고 판명나면 0 리턴
        return 1 # 스도쿠가 맞다고 판명나면 1 리턴
    
    # 가로줄 검증
    # 얘는 그냥 구현해놓은 메소드에 전체 스도쿠 리스트를 넣으면 된다.
    ck_row = check(sudoku)
    
    # 세로줄 검증 (tmpColumn를 통해 임의로 세로줄 리스트를 하나하나 만들어줌)
    columnSudoku = []
    for rowNum in range(9): # 각 컬럼(열)마다
        tmpColumn = []
        for colNum in range(9): # 각 로우(행)을 추가해줌 (중첩 for문에서 rowNum과 colNum 위치를 주의하자.)
            tmpColumn.append(sudoku[colNum][rowNum])
        columnSudoku.append(tmpColumn)
    ck_col = check(columnSudoku)
    
    # 사각형 검증
    # 스도쿠를 이루는 9개의 사각형들의 좌표, 즉 row와 column값을 3진수 ([0~2][0~2]) 라고 생각해보자.
    # 그렇다면 9개의 각각의 사각형에는 각각의 값의 좌표([0~8][0~8])를 3으로 나눴을 때와 row와 column값이 같은 사각형에 들어가야 한다.
    # 예시) [5][6]에 있는 값을 몇번째 사각형에 넣어야 할까? 5나누기 3의 정수값은 1이고, 6나누기 3의 정수값은 2다. 
    # 따라서 삼진법으로 [1][2]번 좌표의 상자에 들어가야 한다. 삼진법으로 12는 십진수로 5, 즉 6번째 상자에 들어가야 한다. (인덱스는 0부터 시작하므로)
    rectangular = []
    for recRow in range(3): # 사각형의 Row좌표
        for recCol in range(3): # 사각형의 Col좌표
            tmpRec = []
            for row in range(9):
                for col in range(9):
                    if (row//3 == recRow) & (col//3 == recCol):
                        tmpRec.append(sudoku[row][col])
            rectangular.append(tmpRec)
    ck_rec = check(rectangular)
    
    if ck_row & ck_col & ck_rec:
        print('#', test_case, ' ', 1, sep='')
    else:
        print('#', test_case, ' ', 0, sep='')

# 이 밑은 문제 풀기 전 초안으로 작성한 것. 

# 세개의 리스트를 만든다 (가로, 세로, 사각형)
# 그 리스트들이 모두 1~9를 만족하면 통과
# 아니라면 실격