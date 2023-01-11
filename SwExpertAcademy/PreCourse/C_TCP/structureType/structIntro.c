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
    struct book my_book = {"HTML과 CSS", "홍길동", 28000};
    struct book java_book = {.title = "Java language", .price = 30000};

    printf("첫 번째 책의 제목은 %s이고, 저자는 %s이며, 가격은 %d원입니다.\n", my_book.title, my_book.author, my_book.price);
    printf("두 번째 책의 제목은 %s이고, 저자는 %s이며, 가격은 %d원입니다.\n\n", java_book.title, java_book.author, java_book.price);

    TEXTBOOK my_book2 = {"HTML과 CSS", "홍길동", 28000};
    TEXTBOOK java_book2 = {.title = "java language", .price = 30000};

    printf("첫 번째 책의 제목은 %s이고, 저자는 %s이며, 가격은 %d원입니다.\n", my_book2.title, my_book2.author, my_book2.price);
    printf("두 번째 책의 제목은 %s이고, 저자는 %s이며, 가격은 %d원입니다.\n", java_book2.title, java_book2.author, java_book2.price);
    return 0;
}