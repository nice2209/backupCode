#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    int a;

    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("");
        }
        printf(" ");
    }
     
    return 0;
}