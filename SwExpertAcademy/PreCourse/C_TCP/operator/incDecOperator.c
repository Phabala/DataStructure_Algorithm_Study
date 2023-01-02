#include <stdio.h>

int main(void)
{
    int num01 = 7;
    int num02 = 7;
    int result01, result02;

    result01 = (++num01) - 5; // ++하고 식 계산
    result02 = (num02++) - 5; // 식 계산하고 ++

    printf("전위 증가 연산자에 의한 결괏값은 %d이고, 변수의 값은 %d로 변했습니다.\n", result01, num01);
    printf("후위 증가 연산자에 의한 결괏값은 %d이고, 변수의 값은 %d로 변했습니다.\n", result02, num02);

    int x = 10;
    int y = x-- + 5 + --x;
    printf("변수 x의 값은 %d이고, 변수 y의 값은 %d입니다.\n", x, y);
}