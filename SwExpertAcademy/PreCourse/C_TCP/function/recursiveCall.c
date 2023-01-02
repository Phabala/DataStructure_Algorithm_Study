#include <stdio.h>
int sum(int);
int rSum(int);

int main() {
  printf("1~10의 합은 %d (일반 함수)\n", sum(10));
  printf("1~15의 합은 %d (재귀함수)", rSum(15));
}

int sum(int n) {
  int i;
  int result = 0;

  for (i = 1; i <= n; i++) {
    result += i;
  }

  return result;
}

int rSum(int n) {
  if (n == 1) { // n이 1이면, 그냥 1을 반환
    return 1;
  }
  // n이 1이 아니면, n을 1부터 (n-1)까지의 합과 더한 값을 반환함.
  return n + rSum(n - 1);
}