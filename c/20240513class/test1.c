#include <stdio.h>

int main(void)
{
    int arr[3][3] = {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3}
    };

    int sum = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
    }

    printf("%d", sum);
}