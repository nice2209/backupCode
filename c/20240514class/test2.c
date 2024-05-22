#include <stdio.h>

int main(void)
{
    int num = 10;
    int *ptr;

    ptr = &num;

    printf("포인터 ptr이 가리키는 변수 값 : %d\n", *ptr);
    printf("num에 저장된 값 : %d\n\n", num);

    *ptr = 20;
    printf("포인터 ptr이 가리키는 변수 값 : %d\n", *ptr);
    printf("num에 저장된 값 : %d\n\n", num);

    (*ptr)++;
    printf("포인터 ptr이 가리키는 변수 값 : %d\n", *ptr);
    printf("num이 저장된 값 : %d\n\n", num);

    return 0;
}

// 대입 연산자 a = 10; *pa = 10; | b = a; b = *pa;
// 피 연산자 a + 20; *pa + 20;
// 출력 printf("%d", a); printf("%d", *pa);
// 입력 scanf("%d", &a); scanf("%d", pa);