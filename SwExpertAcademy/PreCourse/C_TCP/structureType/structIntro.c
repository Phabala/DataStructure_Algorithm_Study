#include <stdio.h>

struct book {
    char title[30];
    char author[30];
    int price;
};

typedef struct {
    char title[30];
    char author[30];
    int price;
} TEXTBOOK;

int main(void) {
    struct book my_book = {"HTML�� CSS", "ȫ�浿", 28000};
    struct book java_book = {.title = "Java language", .price = 30000};

    printf("ù ��° å�� ������ %s�̰�, ���ڴ� %s�̸�, ������ %d���Դϴ�.\n", my_book.title, my_book.author, my_book.price);
    printf("�� ��° å�� ������ %s�̰�, ���ڴ� %s�̸�, ������ %d���Դϴ�.\n\n", java_book.title, java_book.author, java_book.price);

    TEXTBOOK my_book2 = {"HTML�� CSS", "ȫ�浿", 28000};
    TEXTBOOK java_book2 = {.title = "java language", .price = 30000};

    printf("ù ��° å�� ������ %s�̰�, ���ڴ� %s�̸�, ������ %d���Դϴ�.\n", my_book2.title, my_book2.author, my_book2.price);
    printf("�� ��° å�� ������ %s�̰�, ���ڴ� %s�̸�, ������ %d���Դϴ�.\n", java_book2.title, java_book2.author, java_book2.price);
    return 0;
}