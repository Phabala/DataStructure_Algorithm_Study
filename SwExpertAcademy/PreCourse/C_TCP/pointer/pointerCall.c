#include <stdio.h>

void local1(int);
void local2(int*);

int main(void) {
    int var = 10;
    printf("���� var�� �ʱⰪ�� %d�Դϴ�.\n", var);

    local1(var);
    printf("local1()�Լ� ȣ�� �� ���� var�� ���� %d�Դϴ�.\n", var);

    local2(&var);
    printf("local2()�Լ� ȣ�� �� ���� var�� ���� %d�Դϴ�.\n", var);
    return 0;
}

void local1(int num) { // call by value
    num += 10;
}

void local2(int* num) { // call by reference
    *num += 10;
}