#include <stdio.h>

int main(void) {
    // continue
    int i;
    int except_num = 3;

    for (i=1; i<=100; i++) {
        if (i%except_num==0) {
            continue;
        }
        printf("%d\n", i);
    }

    // break
    int start_num = 1;
    int end_num = 10;
    int sum = 0;

    while (1) {
        sum += start_num;
        if (start_num == end_num) {
            break;
        }
        start_num++;
    }
    printf("1부터 %d까지 더한 값은 %d입니다.\n", end_num, sum);
}