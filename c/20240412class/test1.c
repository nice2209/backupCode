#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);

    int f = num / 1000;
    int s = (num / 100) % 10;

    switch (f)
    {
    case 1:
        printf("공통과정");
        break;
    case 2:
    case 3:
        switch (s)
        {
        case 1:
        case 2:
            printf("소프트웨어개발과");
            break;
        case 3:
            printf("임베디드소프트웨어과");
            break;
        case 4:
            printf("인공지능");
            break;
        default:
            printf("오류");
            break;
        }
        break;
    default:
        printf("오류");
        break;
    }

    return 0;
}
