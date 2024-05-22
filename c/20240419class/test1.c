#include <stdio.h>

int main(void)
{
    int ary[5] = {0, }, sum = 0;

    for(int i = 0; i < 5; i++)
    {
        printf("%d번째 나이를 입력해주세요 : ", i + 1);
        scanf("%d", &ary[i]);

        sum += ary[i];
    }
    printf("합 : %d", sum);
}

// 8진수를 출력할때는 %o
// 16진수를 출력할때는 %x
// 2의 보수를 출력할때는 함수에 ~붙이기 ex) ~i