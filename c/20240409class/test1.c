#include <stdio.h>

int main(void) {
    int num;

    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("홀수를 입력해주세요.\n");
        return 0;
    }

    for (int i = 1; i <= num; i += 2) {
        for (int j = num; j > i; j -= 2) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = num - 2; i >= 1; i -= 2) {
        for (int j = num; j > i; j -= 2) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
}