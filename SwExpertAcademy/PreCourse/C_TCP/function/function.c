#include <stdio.h>
int bigNum(int, int); // �Լ��� ���� ����
// �����Ϸ����� ���߿� bigNum�� ���ǵǾ� �ִٰ� �˷���.
// ���� �н�(one pass) ������ ��� ������ �Լ��� ������ ������ �����.
// ���� �н�(multi-pass) ��Ŀ����� �����൵ ��.
// C ǥ�ؿ����� ������ �Լ��� ������ ����.

int main(void) {
  int result;

  result = bigNum(3, 5); // �Լ� ȣ��
  printf("�� �� �� �� ū ���� %d�Դϴ�.\n", result);
  result = bigNum(3, 1); // �Լ� ȣ��
  printf("�� �� �� �� ū ���� %d�Դϴ�.\n", result);
  result = bigNum(7, 5); // �Լ� ȣ��
  printf("�� �� �� �� ū ���� %d�Դϴ�.\n", result);
  return 0;
}

int bigNum(int num01, int num02) { // �Լ��� ����
  if (num01 >= num02) {
    return num01;
  } else {
    return num02;
  }
}