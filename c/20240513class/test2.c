#include <stdio.h>

int main(void)
{
    int arr[5][5] = {0};
    int x, y;

    while (1)
    {
        printf("할당할 좌석의 세로, 가로 위치 입력 : ");
        scanf("%d %d", &x, &y);

        if(x <= 0 && y <= 0)
        {
            break;
        }
        else if(arr[x - 1][y - 1] == 1)
        {
            printf("이미 할당된 자리 입니다.\n\n");
        }
        else {
            arr[x - 1][y - 1] = 1;
            printf("할당이 완료 되었습니다.\n\n");
        }
    }

    printf("사용해 주셔서 감사합니다.");
}