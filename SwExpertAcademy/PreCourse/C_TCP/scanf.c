#include <stdio.h>

int main(void)
{
    // scanf() �Լ��� ������
    // int scanf(const char * restrict format, ...);

    int num01, num02; // ���� ���� �ΰ� ����

    printf("ù ��° ������ �Է��ϼ��� : ");
    scanf("%d", &num01); // '&'�� �ּ� ������. �Է¹��� �����͸� �ڿ� ������ ������ �����϶�� �ǹ�.
    printf("�� ��° ������ �Է��ϼ��� : ");
    scanf("%d", &num02);

    printf("�Է��Ͻ� ������ �� ���� %d�Դϴ�.\n", num01 + num02);

    // --------------------------------------------

    int num03, num04;

    printf("�� ���� ������ �Է��ϼ��� : ");
    scanf("%d %d", &num03, &num04);

    printf("�Է��Ͻ� �� ������ 8������ ��Ÿ���� %o�� %o�� �ǰ�,\n", num03, num04);
    printf("�Է��Ͻ� �� ������ 16������ ��Ÿ���� %x�� %x�� �˴ϴ�.\n", num03, num04);

    // --------------------------------------------

    float num05;
    double num06;

    printf("�� ���� �Ǽ��� �Է��ϼ��� : ");
    scanf("%f %f", &num05, &num06);
    printf("�Է��Ͻ� �� �Ǽ��� %f�� %f�Դϴ�.\n", num05, num06);
    printf("�Է¹��� �� �Ǽ� �� �� ��° double�� �������� ���� �ٸ� ���� ����Ǿ����ϴ�.\n\n");

    printf("�ٽ� �� �� �� ���� �Ǽ��� �Է��ϼ��� : ");
    scanf("%f %lf", &num05, &num06);
    printf("�Է��Ͻ� �� �Ǽ��� %f�� %f�Դϴ�.\n", num05, num06);
    printf("�̹����� �� �Ǽ� ��� ����� ����Ǿ����ϴ�.\n");

    return 0;
}