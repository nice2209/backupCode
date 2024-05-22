#include <stdio.h>

int main(void)
{
    int i;
    int arr1[5] = {1, 2, 3, 4, 5};
    int len0fArr1 = sizeof(arr1)/sizeof(arr1[0]);

    printf("arr1[5] = {1, 2, 3, 4, 5}의 ~~ \n");
    for(i = 0; i < len0fArr1; i++)
    {
        printf("%번째 요소 ~~ : %d \n", i + 1, arr1[i]);
    }
    printf("\n");

    return 0;
}

// 초기화 팁

// int arr[50] = {} -> 전체 0으로 초기화
// char arr[50] = {} -> 전체 공백으로 초기화
// int arr[] = {2, 4, 6, 8, 10, 12} -> 반드시 배열 크기를 입력할 필요x
// int arr[50] = {1, 2, 3} -> 처음 3개 초기화, 그 외 0
// int arr[3] = {1, 2, 3, 4} -> Error