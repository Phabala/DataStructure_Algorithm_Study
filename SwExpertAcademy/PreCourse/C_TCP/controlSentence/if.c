#include <stdio.h>

int main(void) 
{
    int num = 3;
    if (num < 5) 
    {
        printf("입력하신 수는 5보다 작습니다.\n");
    }
    if (num == 5)
    {
        printf("입력하신 수는 5입니다.\n");
    }
    if (num > 5)
    {
        printf("입력하신 수는 5보다 큽니다.\n");
    }
// -------------------------------
    if (num <5)
    {
        printf("입력하신 수는 5보다 작습니다.\n");
    }
    else
    {
        if (num == 5)
        {
            printf("입력하신 수는 5입니다.\n");
        }
        else
        {
            printf("입력하신 수는 5보다 큽니다.\n");
        }
    }
// --------------------------------
    if (num < 5)
    {
        printf("입력하신 수는 5보다 작습니다.\n");
    }
    else if (num == 5)
    {
        printf("입력하신 수는 5입니다.\n");
    }
    else
    {
        printf("입력하신 수는 5보다 큽니다.\n");
    }
// ----------------------------------
    (num < 5) ? printf("num은 5보다 큽니다") : printf("num은 5보다 작습니다.");
}