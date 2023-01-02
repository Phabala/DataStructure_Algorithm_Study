#include <stdio.h>

int main(void)
{
    // 삼항연산자 예제
    int num01 = 15;
    int num02 = 8;
    int result;

    result = (num01 > num02) ? num01 : num02;
    printf("둘 중에 더 큰수는 %d입니다.\n", result);

    /* 쉼표 연산자

    쉼표(,) 연산자는 얼핏 연산자가 아닌 것처럼 보이지만 다양한 용도로 사용하는 연산자다.
    이 연산자는 어떠한 연산을 수행하는 것이 아니라 다음과 같은 상황에서 사용된다.

    - 두 연산식을 하나의 연산식으로 나타내고자 할 때
    - 둘 이상의 인수를 함수로 전달하고자 할 때
    */

    int num03 = 15, num04 = 8;
    printf("첫 번째 수는 %d이고, 두 번째 수는 %d입니다.\n", num03, num04);

    // sizeof 연산자 (함수가 아님)

    char a;
    int b;
    double d;

    printf("\n sizeof 연산자\n");

    printf(" a = %d byte \n", sizeof(a));
    printf(" b = %d byte \n", sizeof(b));
    printf(" d = %d byte \n", sizeof(d));

    printf("\n 시스템이 자동으로 인식하는 크기\n");
    printf(" #      = %d byte \n", sizeof('#'));
    printf(" 50     = %d byte \n", sizeof(50));
    printf(" 4.153  = %d byte \n", sizeof(4.153));
    printf(" kim    = %d byte \n", sizeof("kim"));

    return 0;
}