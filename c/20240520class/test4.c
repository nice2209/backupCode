#include <stdio.h>

int main(void)
{
    int num1 = 3;
    int num2 = 30;
    int *ptr = &num1;
    int **dptr = &ptr;

    printf("ptr이 가리키는 변수 값 : %d \n, num1");
    printf("ptr이 가리키는 변수 값 : %d \n", *ptr);
    printf("ptr이 가리키는 변수 값 : %d \n\n", **dptr);

    *dptr = &num2;
    printf("ptr이 가라키는 변수 값 : %d \n", num2);
    printf("ptr이 가리키는 변수 값 : %d \n", **dptr);

    **dptr += 3000;
    printf("ptr이 가리키는 변수 값 : %d \n", num2);
    printf("ptr이 가리키는 변수 값 : %d \n", *ptr);
    printf("ptr이 가리키는 변수 값 : %d \n\n", **dptr);
}