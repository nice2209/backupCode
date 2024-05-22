#include <stdio.h>

int main(void)
{
    int n1 = 100;
    int n2 = 200;

    int *ptr1 = &n1;
    int *ptr2 = &n2;
    int **dptr = &ptr1;

    ptr1 = &n2;
    ptr2 = &n1;
    dptr = &ptr2;

    printf(" *ptr1 = %d \n", *ptr1);
    printf(" *ptr2 = %d \n", *ptr2);
    printf("**dptr = %d \n\n",**dptr);
}

// 포인터 연산이란?
// - 포인터를 피연산자로 하는 연산 전부를 의미
// 포인터 관련 연산자의 종류
// - 메모리 참조 연산 : *연산자
// - 주소 값 반환 연산 : &연산자
// - 포인터 덧셈 연산 : +. ++
// - 포인터 뺄셈 연산 : -, --