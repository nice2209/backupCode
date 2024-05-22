#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void)
{
    char capital[16];

    printf("우리나라의 수도는 어디입니까?");
    scanf("%s", capital);

    if (strcmp(capital, "서울") == 0)
    {
        printf("축하합니다. 정답입니다.\n");
    }
    else
    {
        printf("틀렸다. 넌 어떻게 그것도 모르냐?\n");
    }
}