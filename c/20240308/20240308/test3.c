#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    int array[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int a;
    printf("���� �Է��ϼ��� : ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("%d���� %d���Դϴ�.", a, array[0]);
        break;
    case 2:
        printf("%d���� %d���Դϴ�.", a, array[1]);
        break;
    case 3:
        printf("%d���� %d���Դϴ�.", a, array[2]);
        break;
    case 4:
        printf("%d���� %d���Դϴ�.", a, array[3]);
        break;
    case 5:
        printf("%d���� %d���Դϴ�.", a, array[4]);
        break;
    case 6:
        printf("%d���� %d���Դϴ�.", a, array[5]);
        break;
    case 7:
        printf("%d���� %d���Դϴ�.", a, array[6]);
        break;
    case 8:
        printf("%d���� %d���Դϴ�.", a, array[7]);
        break;
    case 9:
        printf("%d���� %d���Դϴ�.", a, array[8]);
        break;
    case 10:
        printf("%d���� %d���Դϴ�.", a, array[9]);
        break;
    case 11:
        printf("%d���� %d���Դϴ�.", a, array[10]);
        break;
    case 12:
        printf("%d���� %d���Դϴ�.", a, array[11]);
        break;
    default:
        printf("�߸��� ��.");
        break;
    }
}

//#include <stdio.h>
//#pragma warning(disable:4996)
//
//int main(void)
//{
//    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    int month;
//
//    printf("���� �Է��ϼ��� : ");
//    scanf("%d", &month);
//
//    if (month >= 1 && month <= 12) {
//        printf("%d���� %d���Դϴ�.\n", month, days_in_month[month - 1]);
//    }
//    else {
//        printf("�߸��� ��.\n");
//    }
//
//    return 0;
//}