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

    while (bus != busStopLength):  # 버스가 종점에 다다르면 while문 중단

        tmpDict = {}  # 버스와 정류장 사이 거리를 담는 딕셔너리
        for idx in range(bus+1, busStopLength+1):  # 딕셔너리에 버스와 정류장 사이 거리를 담는 과정
            # 충전기가 있는 정류장이거나 종점이고, enableMove 거리 안에 있다면 딕셔너리에 추가
            if ((chargerList.count(idx) == 1) | (idx == busStopLength)) & ((idx - bus) <= enableMove):
                tmpDict[idx] = idx - bus

        # 딕셔너리가 비어있다면 버스 이동 불가 (emableMove보다 거리가 긴 정류장들은 걸러졌으므로)
        if tmpDict == {}:
            count = 0
            break
        else:
            count += 1
            bus = max(tmpDict, key=tmpDict.get)  # value가 가장 큰 key를 get
            if bus == busStopLength:
                count -= 1  # 종점은 count 갯수에서 제외
            else:
                pass
    print('#', test_case, ' ', count, sep='')
