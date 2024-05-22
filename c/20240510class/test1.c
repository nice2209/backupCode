#include <stdio.h>

int main(void) {
    int sungjuk[5][5] = {0};
    int all = 0;

    for (int i = 0; i < 5; i++) {
        printf("%d번째 학생의 점수를 입력하세요.\n", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("%d번째 과목: ", j + 1);
            scanf("%d", &sungjuk[i][j]);
            sungjuk[i][4] += sungjuk[i][j];
        }
        all += sungjuk[i][4];
    }

    for (int i = 0; i < 5; i++) {
        printf("%d번째 학생 과목별 점수 : ", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("%d ", sungjuk[i][j]);
        }
        printf("\n총점 : %d\n평균 : %.2f\n", sungjuk[i][4], (float)sungjuk[i][4] / 4);
    }

    printf("\n전체 총점 : %d\n전체 평균 : %.2f\n", all, (float)all / 20);

    return 0;
}
