# vscode 에서는 되는데 Programmers 에서는 안된다.
# 인덱스의 값을 짝수의 절반만큼, 길이 2 <= 9, 원소 값 1 <= 1000
def solution(food):
    lst = food[1:len(food)-1]
    lst = list(map(int, lst.split(', ')))
    tableLeft = []
    
    for i in range(1, len(lst)):
        if lst[i] % 2 == 1:
            lst[i] = lst[i] - 1
    
    for j in range(1, len(lst)):
        if lst[j] != 0:
            tableLeft.append(str(j)*(lst[j]//2))
    
    tableRight = [_ for _ in tableLeft]
    tableRight.reverse()
    
    tableLeft = ''.join(tableLeft)
    tableRight = ''.join(tableRight)
    table = tableLeft + '0' + tableRight
    
    return table
    
if __name__ == '__main__':
    a = input()
    print(solution(a))