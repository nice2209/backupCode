#include <stdio.h>

int main(void)
{
    int a, b, sum = 0, i;

    printf("두 정수를 입력하세요 : ");

    scanf("%d %d", &a, &b);

    if(a > b)
    {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }

    // for(int i = a; i <= b; i++)
    // {
    //     printf("%d ", i);
    //     sum += i;
    // }

    i = a;

    // while (i <= b)
    // {
    //     printf("%d ", i);
    //     sum += i;
    //     i++;
    // }

    do
    {
        printf("%d ", i);
        sum += i;
        i++;
    } while (i <= b);
    
    

    printf("\n합은 %d입니다.", sum);

    return 0;
}