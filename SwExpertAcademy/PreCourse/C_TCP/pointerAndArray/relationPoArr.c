#include <stdio.h>

int main(void) {
    int arr[3] = {10, 20, 30}; // �迭 ����
    int* ptr_arr = arr; // �����Ϳ� �迭�� �̸��� ������

    printf("�迭�� �̸��� �̿��Ͽ� �迭 ��ҿ� ���� : %d %d %d\n", arr[0], arr[1], arr[2]);
    printf("    �����͸� �̿��Ͽ� �迭 ��ҿ� ���� : %d %d %d\n\n", ptr_arr[0], ptr_arr[1], ptr_arr[2]);

    printf("�迭�� �̸��� �̿��� �迭�� ũ�� ��� : %d\n", sizeof(arr));
    printf("    �����͸� �̿��� �迭�� ũ�� ��� : %d\n\n", sizeof(ptr_arr));

    printf("�迭�� �̸����� ������ ������ �� �迭 ��ҿ� ���� : %d %d %d\n", *(arr+0), *(arr+1), *(arr+2));

    // arr�� �迭�� �̸��̰ų� �������̰� n�� ������ ��,
    // arr[n] == *(arr + n)
    return 0;
}