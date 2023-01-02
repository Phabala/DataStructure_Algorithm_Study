#include <stdio.h>

int main(void) {
    // 포인터는 증가, 감소 등 제한된 연산만을 할 수 있다.
    char* ptr_char = 0;
    int* ptr_int = NULL;
    double* ptr_double = 0x00;

    printf("포인터 ptr_char가 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_char);
    printf("포인터 ptr_int가 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_int);
    printf("포인터 ptr_double이 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_double);

    printf("포인터 ptr_char가 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_char);
    printf("포인터 ptr_int가 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_int);
    printf("포인터 ptr_double이 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_double);
    printf("포인터 ptr_double이 다시 1 감소한 후에 가리키고 있는 주소값은 %#x입니다.\n\n", --ptr_double);

    // -----------------------------------------------------------

    int num01 = 10;
    int num02 = 20;
    int *ptr_num01 = &num01;
    int *ptr_num02 = &num02;

    if (ptr_num01 != ptr_num02) { // 포인터 끼리의 비교 연산
        printf("포인터 ptr_num01이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num01);
        printf("포인터 ptr_num02이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num02);
        printf("포인터 ptr_num01과 ptr_num02는 현재 다른 주소를 가리키고 있습니다.\n\n");
        ptr_num02 = ptr_num01; // 포인터끼리의 대입 연산
    }

    printf("포인터 ptr_num01이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num01);
    printf("포인터 ptr_num02이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num02);

    if (ptr_num01 == ptr_num02) { // 포인터끼리의 비교 연산
        printf("포인터 ptr_num01과 ptr_num02는 현재 같은 주소를 가리키고 있습니다.\n");
    }
    
}