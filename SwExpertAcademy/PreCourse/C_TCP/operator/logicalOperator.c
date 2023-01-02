#include <stdio.h>

int main(void)
{
    int num01 = 3;
    int num02 = -7;
    int result01, result02;

    result01 = (num01 > 0) && (num01 < 5);
    result02 = (num02 < 0) || (num02 > 10);

    printf("&& 연산자에 의한 결괏값은 %d입니다.\n", result01);
    printf("|| 연산자에 의한 결괏값은 %d입니다.\n", result02);
    printf("!연산자에 의한 결괏값은 %d입니다.\n", !result02);
}