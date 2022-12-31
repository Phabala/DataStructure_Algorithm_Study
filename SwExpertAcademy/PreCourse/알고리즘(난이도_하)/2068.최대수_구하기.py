T = int(input())
for test_case in range(1, T+1):
    lst = list(map(int, input().split()))
    maxint = max(lst)
    print('#', test_case, ' ', maxint, sep='')
