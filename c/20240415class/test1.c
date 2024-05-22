#include <stdio.h>

int main() {
    int n;
    printf("몇 명의 점수를 입력하시겠습니까? : ");
    scanf("%d", &n);

    int max = -1;
    int min = 101;

    for (int i = 0; i < n; i++) {
        int num;
        printf("점수를 입력하세요 : ");
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }

        if (num < min) {
            min = num;
        }
    }

    printf("1등은 %d입니다.\n", max);
    printf("꼴등은 %d입니다.\n", min);

    return 0;
}
