#include <stdio.h>
int bigNum(int, int); // 함수의 원형 선언
// 컴파일러에게 나중에 bigNum이 정의되어 있다고 알려줌.
// 단일 패스(one pass) 컴파일 방식 에서는 함수의 원형을 선언해 줘야함.
// 다중 패스(multi-pass) 방식에서는 안해줘도 됨.
// C 표준에서는 여전히 함수의 원형을 정의.

int main(void) {
  int result;

  result = bigNum(3, 5); // 함수 호출
  printf("두 수 중 더 큰 수는 %d입니다.\n", result);
  result = bigNum(3, 1); // 함수 호출
  printf("두 수 중 더 큰 수는 %d입니다.\n", result);
  result = bigNum(7, 5); // 함수 호출
  printf("두 수 중 더 큰 수는 %d입니다.\n", result);
  return 0;
}

int bigNum(int num01, int num02) { // 함수의 정의
  if (num01 >= num02) {
    return num01;
  } else {
    return num02;
  }
}