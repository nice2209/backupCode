#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("첫 번째 정수를 입력하세요: ");
    scanf("%d", num1);

    printf("두 번째 정수를 입력하세요: ");
    scanf("%c", &num2);

    sum = num1 + num2;

    printf("%d + %d = %d\n", num1, num2, sum);

    return 0;
}