#include <stdio.h>

int main(void)
{
    char name[1001];
    int name_num;

    scanf("%s", &name);
    scanf("%d", &name_num);

    printf("%c", name[name_num - 1]);

}