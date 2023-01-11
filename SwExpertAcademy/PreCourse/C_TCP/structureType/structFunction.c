#include <stdio.h>

typedef struct {
    int savings;
    int loan;
} PROP;

int calcProperty(int, int); // 1
int calcProperty2(PROP*); // 2

int main(void) {
    int hong_prop;
    PROP hong = {10000000, 4000000};

    // 1
    hong_prop = calcProperty(hong.savings, hong.loan);
    // 구조체의 멤버 변수를 함수의 인수로 전달함

    printf("홍길동의 재산은 적금 %d원에 대출 %d원을 제외한 총 %d원입니다.\n", hong.savings, hong.loan, hong_prop);

    // 2
    hong_prop = calcProperty2(&hong); // 구조체의 주소를 함수의 인수로 전달함.

    printf("홍길동의 재산은 적금 %d원에 대출 %d원을 제외한 총 %d원입니다.\n", hong.savings, hong.loan, hong_prop);
    return 0;
}

int calcProperty(int s, int l) { // 1
    return (s - l);
}

int calcProperty2(PROP* money) { // 2
    money -> savings = 100; // 호출된 함수에서 원본 구조체의 데이터를 변경
    return (money -> savings - money -> loan);
}