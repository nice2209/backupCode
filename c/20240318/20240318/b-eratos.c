//#include <stdio.h>
//
//#define RANGE 500
//
//int main()
//{
//    int prime[RANGE + 1];
//
//    for (int i = 0; i <= RANGE; i++) prime[i] = 1;
//
//    for (int i = 2; i <= RANGE; i++)
//    {
//        if (prime[i])
//        {
//            for (int j = 1 * 2; j <= RANGE; j += i)
//            {
//                prime[j] = 0;
//            }
//        }
//    }
//
//    printf("%d까지의 소수 목록\n", RANGE);
//
//    for (int i = 2; i <= RANGE; i++)
//    {
//        if (prime[i])
//        {
//            printf("%d ", i);
//        }
//    }
//}