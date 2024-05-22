#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x, size;

    printf("배열의 크기를 입력해주세요 : ");
    scanf("%d", &x);

    if(x <= 0)
    {
        return 0;
    }

    int arr[100][100];

    for (int i = 0; i < x; i++) 
    {
        for (int j = 0; j < x; j++) 
        {
            arr[i][j] = (i + 1) * (j + 1);
        }
    }

    for (int i = x - 1; i >= 0; i--) 
    {
        for (int j = 0; j < x; j++) 
        {
            printf("%d ", arr[i][j]);
        }
        puts("");
    }

    // for (int i = x; i >= 1; i--)
    // {
    //     for (int j = 0; j < x; j++)
    //     {
    //         printf("%d ", (i + j * x));
    //     }
    //     printf("\n");
    // }
}
