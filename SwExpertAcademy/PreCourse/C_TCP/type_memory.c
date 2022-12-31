#include <stdio.h>
int main(void)
{
    int num;
    printf("%d\n\n", num); // 쓰레깃값 출력

    int num01, num02;
    double num03 = 1.23, num04 = 4.56; // 초기화도 여러개 동시에 가능.

    // 123, 3.14, 'a' -> 정수형, 실수형, 문자형 리터럴 상수
    // 데이터가 저장된 메모리 공간을 가리키는 이름을 갖고 있지 않음.

    // 심볼릭 상수(symbolic constant)
    // 변수 처럼 이름을 갖고 있는 상수. 반드시 선언과 동시에 초기화 되어야 함.
    // const 키워드를 사용하거나, 매크로를 이용하여 선언할 수 있음.

    const int MAX = 10; // const 키워드를 이용한 심볼릭 상수
#define MAX 10;         // #define 선행처리 지시자를 이용한 매크로 심볼릭 상수

    // C 컴파일러는 다음과 같은 순서대로 자동 타입 변환을 수행한다.
    // char -> short -> int -> long -> float -> double -> long double

    // 아래는 명시적 타입 변환을 보여주는 예제
    int num05 = 1;
    int num06 = 4;

    double result01 = num05 / num06; // 결과값 타입은 피연산자의 타입과 동일, 정수끼리 나누면 무조건 0만 나옴.
    double result02 = (double)num05 / num06;

    printf("result01에 저장된 값은 %f입니다.\n", result01);
    printf("result02에 저장된 값은 %f입니다.\n", result02);
}
