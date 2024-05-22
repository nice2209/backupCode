#include <stdio.h>
#pragma warning(disable:4996)

void ifCalculator(int n, int m)
{
    if (n > m)
    {
        printf("%d > %d\n", n, m);
        printf("계산 결과 : %d + %d = %d\n", n,  m, n + m);
        printf("%d의 주소는 %p입니다.\n", m + n, &m + n);
        printf("%d의 크기는 %d입니다.", m + n, sizeof(m + n));
    }
    else if(n < m)
    {
        printf("%d < %d\n", n, m);
        printf("계산 결과 : %d - %d = %d\n", m, n, m - n);
        printf("%d의 주소는 %p입니다.\n", m - n, &m - n);
        printf("%d의 크기는 %dByte 입니다.", m - n, sizeof(m - n));
    }
    else
    {  
        printf("프로그램 오류 (숫자만 입력해주세요)");
    }
}

int main(void)
{
    int a, b;

    printf("2개의 숫자중 왼쪽이 크다면 2개의 값을 더하고 아니면 뺴는 계산기\n2개의 숫자를 입력해주세요 : ");

    scanf("%d %d", &a, &b);
    
    ifCalculator(a, b);

    return 0;
}