#include <stdio.h>

int main(void)
{
    int a = 10, b = 20, *ptr_a, *ptr_b, *temp;

    ptr_a = &a;
    ptr_b = &b;

    printf("%d %d\n", *ptr_a, *ptr_b);

    *ptr_a -= 1;
    *ptr_b -= 1;

    temp = ptr_a;
    ptr_a = ptr_b;
    ptr_b = temp;

    printf("%d %d", *ptr_a, *ptr_b);
}