//#include <stdio.h>
//#include <malloc.h>
//#pragma warning(disable:4996)
//
//int main()
//{
//    int* arScore;
//    int i, num;
//    int sum;
//
//    printf("�л� ���� �Է��ϼ��� : ");
//    scanf("%d", &num);
//    arScore = (int*)malloc(num * sizeof(int));
//    if (arScore == NULL)
//    {
//        printf("�޸𸮰� �����մϴ�.\n");
//        exit(0);
//    }
//
//    for (i = 0; i < num; i++)
//    {
//        printf("%d�� �л��� ������ �Է��ϼ��� : ", i + 1);
//        scanf("%d", &arScore[i]);
//    }
//
//    sum = 0;
//    for (i = 0; i < num; i++)
//    {
//        sum += arScore[i];
//    }
//
//    printf("\n���� = %d, ��� = %d.\n", sum, sum / num);
//    free(arScore);
//}