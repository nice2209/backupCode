#include <stdio.h>

int main(void)
{
    int num1 = 3;
    char num2 = 'A';
    double num3 = 3.15;
    
    int *ptr1 = &num1;
    char *ptr2 = &num2;
    double *ptr3 = &num3;

    printf("num1의 저장위치 : %#x \n", ptr1);
    printf("num2의 저장위치 : %#x \n", ptr3);
    printf("num3의 저장위치 : %#x \n", ptr3);

    printf("포인터 변수 ptr1의 크기 : %d\n", sizeof(ptr1));
    printf("포인터 변수 ptr2의 크기 : %d\n", sizeof(ptr2));
    printf("포인터 변수 ptr3의 크기 : %d\n", sizeof(ptr3));

    // num1의 저장위치 : 0x61ff10 
    // num2의 저장위치 : 0x61ff00
    // num3의 저장위치 : 0x61ff00
    // 포인터 변수 ptr1의 크기 : 4
    // 포인터 변수 ptr2의 크기 : 4
    // 포인터 변수 ptr3의 크기 : 4
}