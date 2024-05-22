#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    float score;

    printf("성적을 입력하세요 : ");
    if (scanf("%f", &score) != 1) {
        printf("올바른 성적을 입력하세요.\n");
        return 1;
    }

    switch ((int)(score / 10)) {
        case 10:
        case 9:
            printf("등급: A\n");
            break;
        case 8:
            printf("등급: B\n");
            break;
        case 7:
            printf("등급: C\n");
            break;
        case 6:
            printf("등급: D\n");
            break;
        default:
            if (score >= 0 && score <= 100) {
                printf("등급: F\n");
            }
            else {
                printf("성적은 0부터 100 사이의 값이어야 합니다.\n");
                return 1;
            }
        }
    
    return 0;
}