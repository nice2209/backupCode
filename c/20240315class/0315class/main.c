#include <stdio.h>
#pragma warning(disable:4996)

void ifCalculator(int n, int m)
{
    if (n > m)
    {
        printf("%d > %d\n", n, m);
        printf("��� ��� : %d + %d = %d\n", n,  m, n + m);
        printf("%d�� �ּҴ� %p�Դϴ�.\n", m + n, &m + n);
        printf("%d�� ũ��� %d�Դϴ�.", m + n, sizeof(m + n));
    }
    else if(n < m)
    {
        printf("%d < %d\n", n, m);
        printf("��� ��� : %d - %d = %d\n", m, n, m - n);
        printf("%d�� �ּҴ� %p�Դϴ�.\n", m - n, &m - n);
        printf("%d�� ũ��� %dByte �Դϴ�.", m - n, sizeof(m - n));
    }
    else
    {  
        printf("���α׷� ���� (���ڸ� �Է����ּ���)");
    }
}

int main(void)
{
    int a, b;

    printf("2���� ������ ������ ũ�ٸ� 2���� ���� ���ϰ� �ƴϸ� ���� ����\n2���� ���ڸ� �Է����ּ��� : ");

    scanf("%d %d", &a, &b);
    
    ifCalculator(a, b);

    return 0;
}