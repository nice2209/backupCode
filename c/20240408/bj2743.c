#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[101];

    scanf("%s", &name);

    printf("%d", strlen(name));
}