#include <stdio.h>
#include <string.h> // strcpy함수가 선언된 헤더파일

struct book {
    char title[30];
    char author[30];
    int price;
};

int main(void) {
    struct book text_book[3] = {
        {"국어", "홍길동", 15000},
        {"영어", "이순신", 18000},
        {"수학1", "강감찬", 10000}
    };

    puts("각 교과서의 이름은 다음과 같습니다.\n");
    printf("%s, %s, %s\n\n", text_book[0].title, text_book[1].title, text_book[2].title);

    struct book my_book = {"C언어 완전 해부", "홍길동", 35000};
    struct book* ptr_my_book; // 구조체 포인트 선언

    ptr_my_book = &my_book;

    // strcpy: string copy의 줄임말. 매개변수2의 문자열을 매개변수1로 복사.
    strcpy((*ptr_my_book).title, "C언어 마스터"); // 참조 연산자(*)를 이용하는 방법
    strcpy(ptr_my_book -> author, "이순신"); // 화살표 연산자(->)를 이용하는 방법
    my_book.price = 32000; // 구조체 변수를 이용한 직접 수정

    printf("책의 제목은 %s이고, 저자는 %s이며, 가격은 %d원입니다.\n", my_book.title, my_book.author, my_book.price);
    return 0;
}