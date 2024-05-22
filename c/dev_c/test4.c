#include <stdio.h>

int main() {
    int hour, minute;

    printf("현재 시간을 입력하세요 (시 분): ");
    scanf("%d %d", &hour, &minute);

    minute -= 30;
    if (minute < 0) {
        minute += 60;
        hour--;
    }
    if (hour < 0) {
        hour += 24;
    }

    printf("30분 전의 시간: %02d:%02d\n", hour, minute);

    return 0;
}
