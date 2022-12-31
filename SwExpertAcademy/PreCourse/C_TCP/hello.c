#include <stdio.h>
#define TEXT "Welcome to C Programming!!"
// 소스파일은 .c가 붙은 c언어 파일
// # 가 붙은게 선행처리기가 처리하는 선행처리 지시문
int main()
{
    printf(TEXT);
    return 0;
}

// 소스파일 -> 선행처리기 -> 컴파일러 -> 오브젝트 파일 -> (시동코드, 표준 라이브러리파일 -> ) 링커 -> 실행파일