#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{
    int ans = pow(2, ceil(M_PI));
    printf("%d", ans);
}

// pow(2, 3)은 2의 3제곱을 구하는 방식입니다.
// 여기서 M_PI는 파이값을 올림하여 2의 4승을 구하는 문제