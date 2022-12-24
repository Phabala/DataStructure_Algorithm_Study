'''
N개의 양의 정수에서 가장 큰 수와 가장 작은 수의 차이를 출력하시오.


[입력]

첫 줄에 테스트 케이스의 수 T가 주어진다. ( 1 ≤ T ≤ 50 )

각 케이스의 첫 줄에 양수의 개수 N이 주어진다. ( 5 ≤ N ≤ 1000 )

다음 줄에 N개의 양수 ai가 주어진다. ( 1 ≤ ai≤ 1000000 )

[출력]

각 줄마다 "#T" (T는 테스트 케이스 번호)를 출력한 뒤, 답을 출력한다.
'''

'''
[입력]

3
5
477162 658880 751280 927930 297191
5
565469 851600 460874 148692 111090
10
784386 279993 982220 996285 614710 992232 195265 359810 919192 158175
'''

'''
[출력]
#1 630739
#2 740510
#3 838110
'''

T = int(input())


def ExBubbleSort(a):
    for i in range(len(a)-1, 0, -1):  # range(start, stop, gap)
        for j in range(0, i):
            if a[j] > a[j+1]:
                a[j], a[j+1] = a[j+1], a[j]


def MyBubbleSort():
    for test_case in range(1, T+1):
        list_length = int(input())
        int_list = list(map(int, input().split()))

        # [0, 1, 2, 3, 4] 를 한다고 했을 때, 01, 12, 23, 34, 01, 12, 23, 01, 12, 01
        X = list_length - 1  # 첫 싸이클 앞 자리가 끝까지 가는 인덱스

        while (X >= 0):  # 모든 싸이클을 돌았다면 종료

            for step in range(X):  # 한 싸이클에 밟는 스텝들
                if int_list[step] > int_list[step+1]:  # 앞 원소가 뒤 원소보다 클 경우
                    int_list[step], int_list[step +
                                             1] = int_list[step+1], int_list[step]  # 스왑

            X -= 1
        print('#', test_case, ' ', int_list[-1] - int_list[0], sep='')


def RetryBubbleSort():
    for test_case in range(1, T+1):
        list_length = int(input())
        int_list = list(map(int, input().split()))

        for x in range(len(int_list)-1, 0, -1):
            for y in range(0, x):
                if int_list[y] > int_list[y+1]:
                    int_list[y], int_list[y+1] = int_list[y+1], int_list[y]
        print('#', test_case, ' ', int_list[-1] - int_list[0], sep='')


RetryBubbleSort()

