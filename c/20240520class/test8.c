#include <stdio.h>
#include <string.h>

int main(void)
{
    int cnt = 0;
    char *string = "He Is My Best Friend!";

    for(int i = 0; i < strlen(string); i++)
    {
        if(string[i] >= 'A' && string[i] <= 'Z')
        {
            cnt++;
        }
    }

    printf("대문자의 개수 : %d", cnt);

    return 0;
}