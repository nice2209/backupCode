#include <stdio.h>

int main(void)
{
    int ary[5] = {0, }, sum = 0;

    for(int i = 0; i < 5; i++)
    {
        printf("%d번째 사람의 나이를 입력해주세요 : ", i + 1);
        scanf("%d", &ary[i]);
        sum += ary[i];
    }

    printf("평균 나이는 : %d", sum / 5);

    return 0;
}