#include <stdio.h>

int main() {
    int hour, minute;

    printf("���� �ð��� �Է��ϼ��� (�� ��): ");
    scanf("%d %d", &hour, &minute);

    minute -= 30;
    if (minute < 0) {
        minute += 60;
        hour--;
    }
    if (hour < 0) {
        hour += 24;
    }

    printf("30�� ���� �ð�: %02d:%02d\n", hour, minute);

    return 0;
}
