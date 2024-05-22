#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    if(a > b)
    {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }

    for(int i = a; i <= b; i++)
    {
        printf("%d ", i);
    }
}