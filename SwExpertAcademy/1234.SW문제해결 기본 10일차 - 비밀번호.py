input_list = [list(map(int, input().split())) for _ in range(10)]

for i in range(10):
    length = str(input_list[i][0])
    num = str(input_list[i][1])
    ck = 1
    
    while ck: # True 는 나중에 조건 바꾸기
        for num_idx in range(0, len(num)-1):
            if num[num_idx] == num[num_idx+1]:
                num = num[:num_idx] + num[num_idx+2:]
                break
            if num_idx == len(num)-2:
                ck = 0
        continue
    
    if num[0] == '0':
        num = num[1:]
    print('#' + str(i+1) + ' ' + num)