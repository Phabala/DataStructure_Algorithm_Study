T = int(input())
for test_case in range(1, T+1):
    lst = list(map(int, input().split()))
    mean = sum(lst)/len(lst)
    print('#', test_case, ' ', round(mean), sep='')
