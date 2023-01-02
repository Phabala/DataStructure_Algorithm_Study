#include <stdio.h>

int main(void)
{
    int num = 2;
    switch (num)
    {
        case 1:
            printf("입력하신 수는 1입니다.\n");
            break;

        case 2:
            printf("입력하신 수는 2입니다.\n");
            break;

        case 3:
            printf("입력하신 수는 3입니다.\n");
            break;

        case 4:
            printf("입력하신 수는 4입니다.\n");
            break;

        case 5:
            printf("입력하신 수는 5입니다.\n");
            break;

        default:
            printf("1부터 5까지의 수만 입력해주세요!");
            break;
    }
    // -------------------------------------------
    char ch = 'a';  
    switch (ch)
    {
        case 'a':   
        case 'A':
            printf("이 학생의 학점은 A입니다.\n");   
            break;
        
        case 'b':
        case 'B':
            printf("이 학생의 학점은 B입니다.\n");
            break;
        
        case 'c':
        case 'C':
            printf("이 학생의 학점은 C입니다.\n");
            break;

        case 'd':
        case 'D':
            printf("이 학생의 학점은 D입니다.\n");
            break;

        case 'f':
        case 'F':
            printf("이 학생의 학점은 F입니다.\n");
            break;

        default:
            printf("학점을 정확히 입력해 주세요!(A, B, C, D, F)");
            break;
    }
    
}