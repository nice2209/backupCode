#include <stdio.h>

int main(void) {

    int a;
    int b;

    printf("���� ���� ��¥�� �Է��� �ּ��� : ");
    scanf_s("%d %d", &a, &b);

    switch (a)
    {
    case 4:
    case 6:  
    case 9:
    case 11:
        printf("����");
    default:
        break;
    }

    return 0;
}