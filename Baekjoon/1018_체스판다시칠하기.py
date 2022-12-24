def repaint_chessboard():
    n, m = map(int, input().split())
    lst = []
    board1 = ['W' if i % 2 == 0 else 'B' for i in range(64)]
    board2 = ['B' if i % 2 == 0 else 'W' for i in range(64)]
    for i in range(n):
        lst.append(str(input()))