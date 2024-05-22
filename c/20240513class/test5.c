// 주소 값 하나는 1바이트 크기의 메모리 공간을 표현
// 하나의 주소 값은 1바이트 단위로 할당이 된다.

#include <stdio.h>

int main(void)
{
    int *p, a;
    scanf("%d", &a);
    p = &a;
    printf("%d\n", *p);
}