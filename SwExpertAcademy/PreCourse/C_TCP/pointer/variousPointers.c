#include <stdio.h>

int main(void) {
    int num = 10; // 변수 선언
    int* ptr_num = &num; // 포인터 선언
    int** pptr_num = &ptr_num; // 포인터의 포인터 선언

    printf("변수 num가 저장하고 있는 값은 %d입니다.\n", num);
    printf("포인터 ptr_num가 가리키는 주소에 저장된 값은 %d입니다.\n", *ptr_num);
    printf("포인터의 포인터 pptr_num가 가리키는 주소에 저장된 포인터가 가리키는 주소에 저장된 값은 %d입니다.\n\n", **pptr_num);

    void* vptr_num = &num; // void 포인터 선언
    printf("변수 num가 저장하고 있는 값은 %d입니다.\n", num);
    printf("void 포인터 vptr_num가 가리키는 주소에 저장된 값은 %d입니다.\n", *(int*)vptr_num);

    *(int*)vptr_num = 20; // void포인터를 통한 메모리 접근
    printf("void 포인터 vptr_num가 가리키는 주소에 저장된 값은 %d입니다.\n\n", *(int*)vptr_num);
}