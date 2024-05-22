#include <stdio.h>

int main(void)
{
    int num[10], find;

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }

    scanf("%d", &find);

    printf("%d", num[find - 1]);
}