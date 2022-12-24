T = int(input())
for test_case in range(1, T + 1):
    enableMove, busStopLength, chargerNum = map(int, input().split())
    chargerList = list(map(int, input().split()))

    tmpBusStop = [0]
    for charger in chargerList:
        tmpBusStop.append(charger)

    tmpBusStop.append(busStopLength)

    count = 0
    bus = 0
    while (bus != busStopLength):

        for idx in range(bus, busStopLength):
            pass

    # print('#', test_case, ' ', count, sep='')
    # 풀다 맘