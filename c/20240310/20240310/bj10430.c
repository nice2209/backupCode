#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n", (a + b) % c);
    printf("%d\n", ((a % b) + (b % c)) % c);
    printf("%d\n", (a * b) % c);
    printf("%d\n", ((a % c) * (b % c)) % c);
}