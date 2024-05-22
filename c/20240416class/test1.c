#include <stdio.h>

int main(void)
{
    int cnt = 0;
    char sName[100], sNum[10];
    printf("이름을 영어로 입력하세요 : ");
    scanf("%s", sName);
    printf("학번을 입력하세요 : ");
    scanf("%s", sNum);
    while (sName[cnt] != '\0')
    {
        cnt++;
    }
    printf("당신의 이름은 %s(%d글자)이고 학번은 %s입니다.", sName, cnt, sNum);
    
}