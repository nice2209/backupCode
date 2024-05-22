#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("error\n");
        return 1;
    }

    int *m = (int *)malloc(n * sizeof(int));

    if (m == NULL) {
        printf("error\n");
        return 1;
    }

    m[0] = 0;
    m[1] = 1;


    for (int i = 2; i < n; i++) {
        m[i] = m[i - 1] + m[i - 2];
    }

    printf("피보나치 수열 :");
    for (int i = 0; i < n; i++) {
        printf(" %d", m[i]);
    }
    printf("\n");

    free(m);

    return 0;
}
