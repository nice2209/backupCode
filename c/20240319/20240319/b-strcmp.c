#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void)
{
    char capital[16];

    printf("�츮������ ������ ����Դϱ�?");
    scanf("%s", capital);

    if (strcmp(capital, "����") == 0)
    {
        printf("�����մϴ�. �����Դϴ�.\n");
    }
    else
    {
        printf("Ʋ�ȴ�. �� ��� �װ͵� �𸣳�?\n");
    }
}