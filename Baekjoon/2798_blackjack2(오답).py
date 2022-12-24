def blackjack():
    n, m = map(int, input().split())
    lst = input().split()
    lst = list(map(int, lst))
    lst.sort(reverse=True)
    print(lst)
    #print(type(lst[0]))

    for i in range(len(lst)-2):
        a = lst[i]
        #print('i = ' + f'{i}')
        for j in range(i+1, len(lst)-1):
            b = lst[j]
            #print('j = ' + f'{j}')
            for k in range(j+1, len(lst)):
                c = lst[k]
                print('i = ' + f'{i}, ' + 'j = ' + f'{j}, ' + 'k = ' + f'{k}')
                print('a = ' + f'{a}, ' + 'b = ' + f'{b}, ' + 'c = ' + f'{c}, ' + f'sum = {a+b+c}')
                #print(a, b, c)
                if a + b + c <= m:
                    return (a+b+c)


if __name__ == '__main__':
    print(blackjack())
