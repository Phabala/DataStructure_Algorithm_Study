#include <stdio.h>

int main(void) {
  // 배열 원소 선언 방법 1
  int grade1[3];
  grade1[0] = 85;
  grade1[1] = 65;
  grade1[2] = 90;

  // 배열 원소 선언 방법 2
  int grade2[3] = {85, 65, 90};

  int i;
  int sum1 = 0;
  int sum2 = 0;

  for (i = 0; i < 3; i++) {
    sum1 += grade1[i];
    sum2 += grade2[i];
  }

  printf("grade1의 합계는 %d점, 평균 점수는 %f점.\n", sum1, (double)sum1 / 3);
  printf("grade2의 합계는 %d점, 평균 점수는 %f점.\n", sum2, (double)sum2 / 3);

  grade2[3] = 100; // grade2[3]를 선언하지 않고 초기화 진행
  printf("grade2[3] 은 %d\n", grade2[3]);

  // 배열의 길이를 명시하지 않음
  int grade3[] = {2, 4, 6, 8, 10};
  int arr_len = sizeof(grade3) / sizeof(grade3[0]); // 배열의 길이를 구하는 공식
  printf("배열 arrGrade의 길이는 %d입니다.\n", arr_len);
}