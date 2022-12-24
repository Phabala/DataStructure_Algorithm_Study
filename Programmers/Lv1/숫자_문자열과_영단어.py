# 문자열에 대응되는 숫자를 만든다
# input을 받는다
# 문자열 안에 위의 문자가 있으면 숫자로 바꾼다.

def solution(s):
    str = s
    numDict = {0:'zero', 1:'one', 2:'two', 3:'three', 4:'four', 5:'five', 6:'six', 7:'seven', 8:'eight', 9:'nine'}
    strList = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
    
    for i in range(10):
        newStr = str.replace(numDict[i], strList[i])
        str = newStr
    
    return int(str)
    
    # for i in range(10):
    #     while True:
    #         tmpStr = numDict[i]
    #         idx = str.find(numDict[i])
    #         if idx == -1:
    #             break
    #         else:
    #             str[idx:idx+len(tmpStr)] == i
    
if __name__ == '__main__':
    str = input()
    print(solution(str))