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
    // ����ü�� ��� ������ �Լ��� �μ��� ������

    printf("ȫ�浿�� ����� ���� %d���� ���� %d���� ������ �� %d���Դϴ�.\n", hong.savings, hong.loan, hong_prop);

    // 2
    hong_prop = calcProperty2(&hong); // ����ü�� �ּҸ� �Լ��� �μ��� ������.

    printf("ȫ�浿�� ����� ���� %d���� ���� %d���� ������ �� %d���Դϴ�.\n", hong.savings, hong.loan, hong_prop);
    return 0;
}

int calcProperty(int s, int l) { // 1
    return (s - l);
}

int calcProperty2(PROP* money) { // 2
    money -> savings = 100; // ȣ��� �Լ����� ���� ����ü�� �����͸� ����
    return (money -> savings - money -> loan);
}