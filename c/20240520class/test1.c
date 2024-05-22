#include <stdio.h>

int main(void)
{
    int num;
    int *ptr = &num;
    printf("*%d\n", sizeof(ptr));
    printf("*%d\n", sizeof(*ptr));

    return 0;
}