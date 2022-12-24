def bulk():
    n = int(input())
    weight = []
    height = []
    rank = [1 for _ in range(n)]

    for num in range(n):
        tmp_w, tmp_h = map(int, input().split())
        weight.append(tmp_w)
        height.append(tmp_h)

    for this in range(n):
        for target in range(n):
            if (weight[target] > weight[this]) & (height[target] > height[this]):
                rank[this] += 1

    for _ in range(n):
        if _ != n-1:
            print(rank[_], end=' ')
        else:
            print(rank[_], end=None)
    return 0

if __name__ == '__main__':
    bulk()