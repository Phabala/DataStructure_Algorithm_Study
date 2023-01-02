#include <stdio.h>

int main(void) {
    // �����ʹ� ����, ���� �� ���ѵ� ���길�� �� �� �ִ�.
    char* ptr_char = 0;
    int* ptr_int = NULL;
    double* ptr_double = 0x00;

    printf("������ ptr_char�� ���� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_char);
    printf("������ ptr_int�� ���� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_int);
    printf("������ ptr_double�� ���� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_double);

    printf("������ ptr_char�� 1 ���� �Ŀ� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ++ptr_char);
    printf("������ ptr_int�� 1 ���� �Ŀ� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ++ptr_int);
    printf("������ ptr_double�� 1 ���� �Ŀ� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ++ptr_double);
    printf("������ ptr_double�� �ٽ� 1 ������ �Ŀ� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n\n", --ptr_double);

    // -----------------------------------------------------------

    int num01 = 10;
    int num02 = 20;
    int *ptr_num01 = &num01;
    int *ptr_num02 = &num02;

    if (ptr_num01 != ptr_num02) { // ������ ������ �� ����
        printf("������ ptr_num01�� ����Ű�� �ִ� �ּҿ� ����� ���� %d�Դϴ�.\n", *ptr_num01);
        printf("������ ptr_num02�� ����Ű�� �ִ� �ּҿ� ����� ���� %d�Դϴ�.\n", *ptr_num02);
        printf("������ ptr_num01�� ptr_num02�� ���� �ٸ� �ּҸ� ����Ű�� �ֽ��ϴ�.\n\n");
        ptr_num02 = ptr_num01; // �����ͳ����� ���� ����
    }

    printf("������ ptr_num01�� ����Ű�� �ִ� �ּҿ� ����� ���� %d�Դϴ�.\n", *ptr_num01);
    printf("������ ptr_num02�� ����Ű�� �ִ� �ּҿ� ����� ���� %d�Դϴ�.\n", *ptr_num02);

    if (ptr_num01 == ptr_num02) { // �����ͳ����� �� ����
        printf("������ ptr_num01�� ptr_num02�� ���� ���� �ּҸ� ����Ű�� �ֽ��ϴ�.\n");
    }
    
}