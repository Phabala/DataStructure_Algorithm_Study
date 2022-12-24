#카드에는 양의 정수들이 있다.
#딜러는 n장의 카드를 모두 숫자가 보이게 바닥에 놓는다.
#딜러는 숫자 m을 크게 외친다.
#플레이어는 제한된 시간에 n장의 카드중 3개를 고른다.
#m을 넘지 않으면서 m과 가깝게 만들어야 한다.

#n장의 카드에 써져 있는 숫자가 주어졌을 때, m을 넘지 않으면서
#m에 최대한 가까운 카드 3장의 합을 구해 출력하라.

#n(3 <= n <= 100), m(10<= m <= 300000)
#i(1<= i <= 100000)

def blackjack():
    n, m = map(int, input().split())
    lst = input().split()
    lst = list(map(int, lst))
    lst.sort()

    big = n-1
    mid = n-2
    small = n-3

    while True:
            if lst[big] + lst[mid] + lst[small] <= m:
                return lst[big] + lst[mid] + lst[small]
            else:
                if small != 0:
                    small -= 1
                    continue
                else: #if small == 0:
                    mid -= 1
                    small = mid-1
                    if mid != 1:
                        mid -= 1
                        small = mid-1
                        continue
                    else: #if mid == 1:
                        big -= 1
                        mid = big-1
                        small = mid-1
                        if big == 2:
                            raise ValueError('세장의 카드의 합이 M보다 낮거나 같아질 수 없음.')



if __name__ == '__main__':
    n, m = map(int, input().split())
    lst = input().split()
    lst = list(map(int, lst))
    lst.sort()
    print(blackjack())

#맨 마지막, 그 전, 그 전전 번호들을 더한다. 그 값이 최대값보다 크면 ck3을 앞으로 보낸다. 그렇게 계속 앞으로 보내다가
#ck3이 0이 되면 ck2를 -1해주고, ck2가 1이 되어도 그 값이 최대값보다 크면 ck3을 -1 한다. 그렇게 하다가
#ck3이 2가 되면 except 처리한다.