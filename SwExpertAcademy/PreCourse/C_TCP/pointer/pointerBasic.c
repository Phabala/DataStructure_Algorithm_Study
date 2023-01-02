#include <stdio.h>

int main(void) {
    int x = 7; // 변수 선언
    int *ptr = &x; // 포인터 선언 
    // ('ptr' references 'x's address.) ptr은 참조한다, x의 주소를.
    int **pptr = &ptr; // pptr references ptr's address.
    // int *ptr = &x; 랑 int ptr = &x; 의 차이점이 뭐지?

    int num01 = 1234;
    double num02 = 3.14;

    int* ptr_num01 = &num01;
    double* ptr_num02 = &num02;

    printf("포인터의 크기는 %d입니다.\n", sizeof(ptr_num01));
    printf("포인터 ptr_num01이 가리키고 있는 주소값은 %#x입니다.\n", ptr_num01);
    printf("포인터 ptr_num02가 가리키고 있는 주소값은 %#x입니다.\n", ptr_num02);
    printf("포인터 ptr_num01이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num01);
    printf("포인터 ptr_num02가 가리키고 있는 주소에 저장된 값은 %f입니다.\n", *ptr_num02);
    return 0;
}