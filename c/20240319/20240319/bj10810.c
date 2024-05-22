//#include <stdio.h>
//#pragma warning(disable:4996)
//
//int main() {
//    int N, M;
//    scanf("%d %d", &N, &M);
//
//    int baskets[101] = { 0 };
//    int i, j, k;
//    for (int m = 0; m < M; m++) {
//        scanf("%d %d %d", &i, &j, &k);
//        for (int n = i; n <= j; n++) {
//            baskets[n] = k;
//        }
//    }
//
//    for (int n = 1; n <= N; n++) {
//        printf("%d ", baskets[n]);
//    }
//    printf("\n");
//
//    return 0;
//}