#include <stdio.h>

int main(void)
{
    int num01 = 7;
    int num02 = 7;
    int result01, result02;

    result01 = (++num01) - 5; // ++�ϰ� �� ���
    result02 = (num02++) - 5; // �� ����ϰ� ++

    printf("���� ���� �����ڿ� ���� �ᱣ���� %d�̰�, ������ ���� %d�� ���߽��ϴ�.\n", result01, num01);
    printf("���� ���� �����ڿ� ���� �ᱣ���� %d�̰�, ������ ���� %d�� ���߽��ϴ�.\n", result02, num02);

    int x = 10;
    int y = x-- + 5 + --x;
    printf("���� x�� ���� %d�̰�, ���� y�� ���� %d�Դϴ�.\n", x, y);
}