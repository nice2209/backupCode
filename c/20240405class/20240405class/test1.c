#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    float score;

    printf("������ �Է��ϼ��� : ");
    if (scanf("%f", &score) != 1) {
        printf("�ùٸ� ������ �Է��ϼ���.\n");
        return 1;
    }

    switch ((int)(score / 10)) {
        case 10:
        case 9:
            printf("���: A\n");
            break;
        case 8:
            printf("���: B\n");
            break;
        case 7:
            printf("���: C\n");
            break;
        case 6:
            printf("���: D\n");
            break;
        default:
            if (score >= 0 && score <= 100) {
                printf("���: F\n");
            }
            else {
                printf("������ 0���� 100 ������ ���̾�� �մϴ�.\n");
                return 1;
            }
        }
    
    return 0;
}