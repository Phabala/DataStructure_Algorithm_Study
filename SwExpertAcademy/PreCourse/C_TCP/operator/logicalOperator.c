#include <stdio.h>

int main(void)
{
    int num01 = 3;
    int num02 = -7;
    int result01, result02;

    result01 = (num01 > 0) && (num01 < 5);
    result02 = (num02 < 0) || (num02 > 10);

    printf("&& �����ڿ� ���� �ᱣ���� %d�Դϴ�.\n", result01);
    printf("|| �����ڿ� ���� �ᱣ���� %d�Դϴ�.\n", result02);
    printf("!�����ڿ� ���� �ᱣ���� %d�Դϴ�.\n", !result02);
}