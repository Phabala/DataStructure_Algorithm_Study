#include <stdio.h>

int main(void) {
    int x = 7; // ���� ����
    int *ptr = &x; // ������ ���� 
    // ('ptr' references 'x's address.) ptr�� �����Ѵ�, x�� �ּҸ�.
    int **pptr = &ptr; // pptr references ptr's address.
    // int *ptr = &x; �� int ptr = &x; �� �������� ����?

    int num01 = 1234;
    double num02 = 3.14;

    int* ptr_num01 = &num01;
    double* ptr_num02 = &num02;

    printf("�������� ũ��� %d�Դϴ�.\n", sizeof(ptr_num01));
    printf("������ ptr_num01�� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_num01);
    printf("������ ptr_num02�� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_num02);
    printf("������ ptr_num01�� ����Ű�� �ִ� �ּҿ� ����� ���� %d�Դϴ�.\n", *ptr_num01);
    printf("������ ptr_num02�� ����Ű�� �ִ� �ּҿ� ����� ���� %f�Դϴ�.\n", *ptr_num02);
    return 0;
}