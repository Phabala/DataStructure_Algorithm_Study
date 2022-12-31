#include <stdio.h>

int main(void)
{
    // scanf() 함수의 원형은
    // int scanf(const char * restrict format, ...);

    int num01, num02; // 정수 변수 두개 선언

    printf("첫 번째 정수를 입력하세요 : ");
    scanf("%d", &num01); // '&'는 주소 연산자. 입력받은 데이터를 뒤에 나오는 전수에 저장하라는 의미.
    printf("두 번째 정수를 입력하세요 : ");
    scanf("%d", &num02);

    printf("입력하신 정수의 두 합은 %d입니다.\n", num01 + num02);

    // --------------------------------------------

    int num03, num04;

    printf("두 개의 정수를 입력하세요 : ");
    scanf("%d %d", &num03, &num04);

    printf("입력하신 두 정수를 8진수로 나타내면 %o와 %o가 되고,\n", num03, num04);
    printf("입력하신 두 정수를 16진수로 나타내면 %x와 %x가 됩니다.\n", num03, num04);

    // --------------------------------------------

    float num05;
    double num06;

    printf("두 개의 실수를 입력하세요 : ");
    scanf("%f %f", &num05, &num06);
    printf("입력하신 두 실수는 %f와 %f입니다.\n", num05, num06);
    printf("입력받은 두 실수 중 두 번째 double형 변수에는 전혀 다른 값이 저장되었습니다.\n\n");

    printf("다시 한 번 두 개의 실수를 입력하세요 : ");
    scanf("%f %lf", &num05, &num06);
    printf("입력하신 두 실수는 %f와 %f입니다.\n", num05, num06);
    printf("이번에는 두 실수 모두 제대로 저장되었습니다.\n");

    return 0;
}