#include <stdio.h>

int main(void)
{
    for(int i = 0; i < 3; i++)
    {
        printf("*** 바깥쪽 for문 %d차 회전*** \n", i+1);
        for(int j = 0; j < 3; j++)
        {
            printf("안쪽의 for문 %d차 회전\n", j+1);
        }
        printf("\n");
    }
    return 0;
}