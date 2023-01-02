#include <stdio.h>

void local1(int);
void local2(int*);

int main(void) {
    int var = 10;
    printf("변수 var의 초기값은 %d입니다.\n", var);

    local1(var);
    printf("local1()함수 호출 후 변수 var의 값은 %d입니다.\n", var);

    local2(&var);
    printf("local2()함수 호출 후 변수 var의 값은 %d입니다.\n", var);
    return 0;
}

void local1(int num) { // call by value
    num += 10;
}

void local2(int* num) { // call by reference
    *num += 10;
}