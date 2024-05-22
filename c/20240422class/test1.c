#include <stdio.h>

int main(void)
{
    int s[100], n, r[100];
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
    }

    for(int i = 0; i < n; i++)
    {
        r[i] = s[n - i - 1];
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", r[i]);
    }
}