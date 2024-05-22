#include <stdio.h>

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};

    int *p = &arr[2];

    printf("현 위치 : %d \n\n", *p);

    printf("한 칸 앞 : %d \n", *(p + 1));
    printf("두 칸 앞 : %d \n\n", *(p + 2));

    printf("한 칸 뒤 : %d \n", *(p - 1));
    printf("두 칸 뒤 : %d \n\n", *(p - 2));
}