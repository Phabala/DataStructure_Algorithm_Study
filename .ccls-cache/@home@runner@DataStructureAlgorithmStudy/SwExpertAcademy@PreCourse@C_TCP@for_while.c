#include <stdio.h>

int main(void) {
  // while 문
  int i = 0;
  int num = 5;

  while (i < num) {
    printf("while 문이 %d번째 반복 수행중입니다.\n", i + 1);
    i++;
  }
  printf("while문이 종료된 후 변수 i의 값은 %d입니다.\n", i);

  // do shile 문
  i = 0;
  num = 3;

  do {
    printf("do / while 문이 %d번째 반복 수행중입니다.\n", i + 1);
    i++;
  } while (i > num);
  printf("do / while 문이 종료된 후 변수 i의 값은 %d입니다.\n", i);

  // for 문
  num = 7;

  for (i = 0; i < num; i++) {
    printf("for 문이 %d번째 반복 수행중입니다.\n", i + 1);
  }
  printf("for 문이 종료된 후 변수 i의 값은 %d입니다.\n", i);
}