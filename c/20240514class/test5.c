#include <stdio.h>

int main(void)
{
    int *ptr = 0;

    *ptr = 100;
    printf("%d", *ptr);

    return 0;
}

// 의도적이라면 명시적으로 형 변환하여 의도적임을 표현하자