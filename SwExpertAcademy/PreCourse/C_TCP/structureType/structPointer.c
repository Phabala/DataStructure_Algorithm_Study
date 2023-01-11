#include <stdio.h>
#include <string.h> // strcpy�Լ��� ����� �������

struct book {
    char title[30];
    char author[30];
    int price;
};

int main(void) {
    struct book text_book[3] = {
        {"����", "ȫ�浿", 15000},
        {"����", "�̼���", 18000},
        {"����1", "������", 10000}
    };

    puts("�� �������� �̸��� ������ �����ϴ�.\n");
    printf("%s, %s, %s\n\n", text_book[0].title, text_book[1].title, text_book[2].title);

    struct book my_book = {"C��� ���� �غ�", "ȫ�浿", 35000};
    struct book* ptr_my_book; // ����ü ����Ʈ ����

    ptr_my_book = &my_book;

    // strcpy: string copy�� ���Ӹ�. �Ű�����2�� ���ڿ��� �Ű�����1�� ����.
    strcpy((*ptr_my_book).title, "C��� ������"); // ���� ������(*)�� �̿��ϴ� ���
    strcpy(ptr_my_book -> author, "�̼���"); // ȭ��ǥ ������(->)�� �̿��ϴ� ���
    my_book.price = 32000; // ����ü ������ �̿��� ���� ����

    printf("å�� ������ %s�̰�, ���ڴ� %s�̸�, ������ %d���Դϴ�.\n", my_book.title, my_book.author, my_book.price);
    return 0;
}