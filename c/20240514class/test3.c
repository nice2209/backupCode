#include <stdio.h>

int main(void)
{
    int a, b;
    int *ptr_a, *ptr_b;

    scanf("%d %d", &a, &b);

    ptr_a = &a;
    ptr_b = &b;

    printf("덧셈 : %d\n평균 : %d", *ptr_a + *ptr_b, (*ptr_a + *ptr_b) / 2);

    return 0;
}

// - 포인터는 변수이므로 값을 다른 주소로 바꿀 수 있음
//   int a, b int *p = &a; p = &b;

// - 포인터의 크기는 컴파일러에 따라 다를 수 있음 (sizeof로 확인)
//   int *p; printf("주소크기 : %d", sizeof(p));

// - 포인터는 가르키는 자료형이 일치할 때만 대입이 가능
//   int *p; double *pd;
//   pd = p; (X)

// - 주소와 포인터의 차이
//   - 주소는 변수의 할당된 메모리 저장 공간 시작 주소 값 자체
//     - 변수의 주소는 변경하거나 수정할 수 없다.
//   - 포인터는 그 값을 저장하는 또다른 메모리 공간
//     - 다른 주소를 대입하여 그 값을 바꿀 수 있다.
//     - 연산도 가능하다.
