#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    int IdCardNumber;

    scanf("%d", &IdCardNumber);

    IdCardNumber % 2 == 1 ? printf("����") : printf("����");
}