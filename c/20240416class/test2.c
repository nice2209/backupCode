#include <stdio.h>

int main(void)
{
    int test[10], sum = 0, max, min;

    for(int i = 0; i < 10; i++)
    {
        printf("%d번의 성적을 입력해주세요 : ", i + 1);
        scanf("%d", &test[i]);
        
        if (i == 0) {
            max = test[i];
            min = test[i];
        }

        sum += test[i];

        if(test[i] > max) {
            max = test[i];
        }

        if(test[i] < min) {
            min = test[i];
        }
    }

    printf("\n-----------------------\n");
    printf("1등 성적 : %d\n", max);
    printf("꼴찌 성적 : %d\n", min);
    printf("평균 : %.2f\n", (float)sum / 10);
}