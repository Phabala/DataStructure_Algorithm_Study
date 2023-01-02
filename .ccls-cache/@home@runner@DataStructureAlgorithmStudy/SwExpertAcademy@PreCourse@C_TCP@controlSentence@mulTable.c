#include <stdio.h>

int main(void) {
  for (int Y = 1; Y < 10; Y++) {
    for (int X = 2; X < 10; X++) {
      printf("%d X %d = %d\t", X, Y, X * Y);
    }
    printf("\n");
  }
}