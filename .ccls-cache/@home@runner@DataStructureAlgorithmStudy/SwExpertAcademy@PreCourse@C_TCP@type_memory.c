#include <stdio.h>
int main(void)
{
    int num;
    printf("%d\n\n", num); // �����갪 ���

    int num01, num02;
    double num03 = 1.23, num04 = 4.56; // �ʱ�ȭ�� ������ ���ÿ� ����.

    // 123, 3.14, 'a' -> ������, �Ǽ���, ������ ���ͷ� ���
    // �����Ͱ� ����� �޸� ������ ����Ű�� �̸��� ���� ���� ����.

    // �ɺ��� ���(symbolic constant)
    // ���� ó�� �̸��� ���� �ִ� ���. �ݵ�� ����� ���ÿ� �ʱ�ȭ �Ǿ�� ��.
    // const Ű���带 ����ϰų�, ��ũ�θ� �̿��Ͽ� ������ �� ����.

    const int MAX = 10; // const Ű���带 �̿��� �ɺ��� ���
#define MAX 10;         // #define ����ó�� �����ڸ� �̿��� ��ũ�� �ɺ��� ���

    // C �����Ϸ��� ������ ���� ������� �ڵ� Ÿ�� ��ȯ�� �����Ѵ�.
    // char -> short -> int -> long -> float -> double -> long double

    // �Ʒ��� ����� Ÿ�� ��ȯ�� �����ִ� ����
    int num05 = 1;
    int num06 = 4;

    double result01 = num05 / num06; // ����� Ÿ���� �ǿ������� Ÿ�԰� ����, �������� ������ ������ 0�� ����.
    double result02 = (double)num05 / num06;

    printf("result01�� ����� ���� %f�Դϴ�.\n", result01);
    printf("result02�� ����� ���� %f�Դϴ�.\n", result02);
}
