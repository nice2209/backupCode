#include <stdio.h>

int main(void)
{
    int nArr1[5] = {10, 20, 30, 40, 50};
    int nArr2[5] = {0};
    int i = 0;

    // 불가능

    // nArr2 = nArr1;

    //가능

    for(i = 0; i < 5; i++)
    {
        nArr2[i] = nArr1[i];
    }

    for(i = 0; i < 5; i++)
    {
        printf("nArr2[%d] : %d\n", i, nArr2[i]);
    }

    printf("\n");

    return 0;
}