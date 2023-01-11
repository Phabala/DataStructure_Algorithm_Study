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

    printf("ȫ�浿�� ����� ���� %d���� ���� %d���� ������ �� %d���Դϴ�.\n", prop.savings, prop.loan, hong_prop);
    return 0;
}

PROP initProperty(void) {
    PROP hong = {1000000, 400000};
    return hong;    // ����ü�� �Լ��� ��ȯ������ ��ȯ��.
}

int calcProperty(const PROP* money) { // const Ű���带 ����Ͽ� ����ü�� �����͸� ���� �����ϴ� ���� ������.
    return (money->savings - money->loan);
}