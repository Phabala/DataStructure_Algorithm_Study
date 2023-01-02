#include <stdio.h>

int main(void) {
    int arr[3] = {10, 20, 30}; // 배열 선언
    int* ptr_arr = arr; // 포인터에 배열의 이름을 대입함

    printf("배열의 이름을 이용하여 배열 요소에 접근 : %d %d %d\n", arr[0], arr[1], arr[2]);
    printf("    포인터를 이용하여 배열 요소에 접근 : %d %d %d\n\n", ptr_arr[0], ptr_arr[1], ptr_arr[2]);

    printf("배열의 이름을 이용한 배열의 크기 계산 : %d\n", sizeof(arr));
    printf("    포인터를 이용한 배열의 크기 계산 : %d\n\n", sizeof(ptr_arr));

    printf("배열의 이름으로 포인터 연산을 해 배열 요소에 접근 : %d %d %d\n", *(arr+0), *(arr+1), *(arr+2));

    // arr이 배열의 이름이거나 포인터이고 n이 정수일 때,
    // arr[n] == *(arr + n)
    return 0;
}