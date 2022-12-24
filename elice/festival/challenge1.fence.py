# 1. 전체 좌표와 당근의 좌표를 받는다.
# 2. fence 꼭짓점의 위치를 구한다.
# 3. 그 값을 바탕으로 울타리의 길이를 구한다.

N, M, K = map(int, input().split()) # N은 y, M은 x, K는 갯수
X = []
Y = []
for i in range(K):
    tmpx, tmpy = map(int, input().split())
    X.append(tmpx)
    Y.append(tmpy)

min_X = min(X)
min_Y = min(Y)
max_X = max(X)
max_Y = max(Y)

width = max_X - min_X + 2
height = max_Y - min_Y + 2
print(2*width + 2*height)