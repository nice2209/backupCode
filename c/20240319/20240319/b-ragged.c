//#include <stdio.h>
//#include <malloc.h>
//#pragma warning(disable:4996)
//
//int main()
//{
//    int* ar[3];
//    int i;
//
//    for (int i = 0; i < 3; i++)
//    {
//        printf("%d반의 학생 수를 입력하세요 : ", i + 1);
//        int num;
//        scanf("%d", &num);
//        ar[i] = (int*)malloc(num * sizeof(int));
//    }
//
//    for (i = 0; i < 3; i++)
//    {
//        free(ar[i]);
//    }
//
//    return 0;
//}