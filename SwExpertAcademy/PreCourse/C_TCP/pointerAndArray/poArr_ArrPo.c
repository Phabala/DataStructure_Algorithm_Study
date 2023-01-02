#include <stdio.h>

int main(void) {
    int i, arr_len;
    int num01 = 10, num02 = 20, num03 = 30;
    int* arr[3] = {&num01, &num02, &num03}; // int형 포인터 배열 선언 (Array Pointer)

    arr_len = sizeof(arr)/sizeof(arr[0]);
    for (i=0; i<arr_len; i++) {
        printf("%d\n", *arr[i]);
    }

    // -------------------------------------------

    int arr2[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    printf("\n%d\n", *arr2[0]);
    printf("%d\n", *arr2[1]);

    // -------------------------------------------

    int arr3[2][3] = { // 배열의 선언
        {10, 20, 30},
        {40, 50, 60}
    };
    int (*pArr)[3] = arr3; // 배열 포인터의 선언 (Pointer to Array)
    // 포인터는 변수의 첫 주소를 가리킨다. 따라서 ++ 했을 때 [1][0]을 가리키기 위해서는 [3] 뒤에 붙여줘야 한다.

    printf("\n%d\n", arr3[1][1]); // 배열 이름으로 참조
    printf("%d\n", pArr[1][1]); // 배열 포인터로 참조
    // 만약 arr를 참조하는 배열 포인터가 (*pArr) 까지만 작성되있다면,
    // 50을 참조하기 위해 pArr[4]로 호출해야 한다.

    return 0;
}