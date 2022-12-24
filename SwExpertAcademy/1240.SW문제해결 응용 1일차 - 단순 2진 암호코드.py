code = {0:'0001101', 1:'0011001', 2:'0010011', 3:'0111101', 4:'0100011', 5:'0110001', 6:'0101111', 7:'0111011', 8:'0110111', 9:'0001011'}

C = int(input())
for test_case in range(C):
    N, M = map(int, input().split())
    packet = []
    word = ''
    decoded = ''
    
    for i in range(N):
        tmp_packet = str(input())
        packet.append(tmp_packet)
    
    for x in packet:
        if '1' in x:
            word = x
            break
    
    for num in code:
        idx_num = word.find(num)
        if idx_num == -1:
            continue
        else:
            decoded = decoded + str(idx_num)
    print(decoded)