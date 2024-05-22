#include <stdio.h>

int main(void)
{
    int *p1; // 쓰레기 값 초기화 어디를 참조할지 모름
    double *p2;

    printf("쓰레기 값1 : %#x\n", p1);
    printf("쓰레기 값2 : %#x\n\n", p2);

    printf("어떤 정수가 찍힐까? %d\n", *p1); // 잘못된 연산
    printf("어떤 정수가 찍힐까? %f\n\n", *p2); // 의도하지 않은 영역의 데이터를 읽어 들임

    *p1 = 25; // 위험한 연산
    *p2 = 3.15; // 큰 문제 발생 가능한 상황

    printf("저장된 정수 : %d\n", *p1);
    printf("저장된 실수 : %f\n\n", *p2);

    return 0;
}