#include <stdio.h>

int main(void) {
    int num = 10; // ���� ����
    int* ptr_num = &num; // ������ ����
    int** pptr_num = &ptr_num; // �������� ������ ����

    printf("���� num�� �����ϰ� �ִ� ���� %d�Դϴ�.\n", num);
    printf("������ ptr_num�� ����Ű�� �ּҿ� ����� ���� %d�Դϴ�.\n", *ptr_num);
    printf("�������� ������ pptr_num�� ����Ű�� �ּҿ� ����� �����Ͱ� ����Ű�� �ּҿ� ����� ���� %d�Դϴ�.\n\n", **pptr_num);

    void* vptr_num = &num; // void ������ ����
    printf("���� num�� �����ϰ� �ִ� ���� %d�Դϴ�.\n", num);
    printf("void ������ vptr_num�� ����Ű�� �ּҿ� ����� ���� %d�Դϴ�.\n", *(int*)vptr_num);

    *(int*)vptr_num = 20; // void�����͸� ���� �޸� ����
    printf("void ������ vptr_num�� ����Ű�� �ּҿ� ����� ���� %d�Դϴ�.\n\n", *(int*)vptr_num);
}