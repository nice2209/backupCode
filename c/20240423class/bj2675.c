#include <stdio.h>

int main(void)
{
    int n, r;
    char a[10000];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %s", &r, &a);

        for(int j = 0; j < r; j++)
        {
            for(int k = 0; k < r; k++)
            {
                printf("%c", a[j]);
            }
        }
        puts("");
    }
}