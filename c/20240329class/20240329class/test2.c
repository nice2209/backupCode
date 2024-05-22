#include <stdio.h>

int main(void) {

    int a;
    int b;

    printf("월과 오늘 날짜를 입력해 주세요 : ");
    scanf_s("%d %d", &a, &b);

    switch (a)
    {
    case 4:
    case 6:  
    case 9:
    case 11:
        printf("안해");
    default:
        break;
    }

    return 0;
}