#include <stdio.h>

typedef struct {
    int savings;
    int loan;
} PROP;

PROP initProperty(void);
int calcProperty(const PROP*);

int main(void) {
    PROP prop;
    int hong_prop;

    prop = initProperty();
    hong_prop = calcProperty(&prop);

    printf("홍길동의 재산은 적금 %d원에 대출 %d원을 제외한 총 %d원입니다.\n", prop.savings, prop.loan, hong_prop);
    return 0;
}

PROP initProperty(void) {
    PROP hong = {1000000, 400000};
    return hong;    // 구조체를 함수의 반환값으로 반환함.
}

int calcProperty(const PROP* money) { // const 키워드를 사용하여 구조체의 데이터를 직접 수정하는 것을 방지함.
    return (money->savings - money->loan);
}