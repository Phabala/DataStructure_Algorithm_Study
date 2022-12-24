# 단순히 P 와 P 사이의 맨해튼 거리를 구하는것은 쉽다. (p1과 p2의 행 간의 차이) + (p1과 p2의 열 간의 차이)
# 맨해튼 거리가 2인데 대각선이면, 두 군데에 파티션(X)가 있어야 한다.
# 맨해튼 거리가 2인데 일자로 있으면, 가운데에 파티션이 있어야 한다.
# 맨해튼 거리가 1이면 무조건 거리두기가 지켜지지 않은 것이다.

# case1. P들의 맨해튼 거리가 3 이상이면 결과는 1
# case2. P들의 맨해튼 거리가 하나라도 1이라면 결과는 0
# case2. P들의 맨해튼 거리가 2가 있는 경우
    # case 2-1. 같은 행 혹은 같은 열에 있는 경우 가운데에 파티션이 있으면 1, 아니면 0
    # case 2-2. 서로간의 대각선에 파티션 2개가 있으면 1, 아니면 0