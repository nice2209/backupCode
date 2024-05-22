#include <stdio.h>

int main(void)
{
    int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

    // arr[0][0] = 0;
    // arr[0][1] = 1;
    // arr[0][2] = 2;
    // arr[1][0] = 3;
    // arr[1][1] = 4;
    // arr[1][2] = 5;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d\n", arr[i][j]);
        }
    }

    return 0;
}