#include <stdio.h>

int main(void)
{
    // ���׿����� ����
    int num01 = 15;
    int num02 = 8;
    int result;

    result = (num01 > num02) ? num01 : num02;
    printf("�� �߿� �� ū���� %d�Դϴ�.\n", result);

    /* ��ǥ ������

    ��ǥ(,) �����ڴ� ���� �����ڰ� �ƴ� ��ó�� �������� �پ��� �뵵�� ����ϴ� �����ڴ�.
    �� �����ڴ� ��� ������ �����ϴ� ���� �ƴ϶� ������ ���� ��Ȳ���� ���ȴ�.

    - �� ������� �ϳ��� ��������� ��Ÿ������ �� ��
    - �� �̻��� �μ��� �Լ��� �����ϰ��� �� ��
    */

    int num03 = 15, num04 = 8;
    printf("ù ��° ���� %d�̰�, �� ��° ���� %d�Դϴ�.\n", num03, num04);

    // sizeof ������ (�Լ��� �ƴ�)

    char a;
    int b;
    double d;

    printf("\n sizeof ������\n");

    printf(" a = %d byte \n", sizeof(a));
    printf(" b = %d byte \n", sizeof(b));
    printf(" d = %d byte \n", sizeof(d));

    printf("\n �ý����� �ڵ����� �ν��ϴ� ũ��\n");
    printf(" #      = %d byte \n", sizeof('#'));
    printf(" 50     = %d byte \n", sizeof(50));
    printf(" 4.153  = %d byte \n", sizeof(4.153));
    printf(" kim    = %d byte \n", sizeof("kim"));

    return 0;
}