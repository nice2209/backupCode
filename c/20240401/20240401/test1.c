#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    int i, sum = 0;

    for (int i = 1; i <= 100; i++)
    {
        printf("%d", i);
        sum += i;
    }

    printf("\n1~100���� ���� %d�Դϴ�.\n", sum);
}