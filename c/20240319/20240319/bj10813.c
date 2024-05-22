//#include <stdio.h>
//#pragma warning(disable:4996)
//
//int main() {
//    int N, M;
//    scanf("%d %d", &N, &M);
//
//    int baskets[101];
//    for (int i = 1; i <= N; i++) {
//        baskets[i] = i;
//    }
//
//    int i, j, temp;
//    for (int m = 0; m < M; m++) {
//        scanf("%d %d", &i, &j);
//        temp = baskets[i];
//        baskets[i] = baskets[j];
//        baskets[j] = temp;
//    }
//
//    for (int i = 1; i <= N; i++) {
//        printf("%d ", baskets[i]);
//    }
//    printf("\n");
//
//    return 0;
//}