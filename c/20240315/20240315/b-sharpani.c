#include <stdio.h>
#include <cursor.h>

int main(void)
{
    clrscr();

    for (int i = 1; i < 80; i++)
    {
        gotoxy(i, 10); putch('#');
        gotoxy(i - 1, 10); putch(' ');
        delay(100);
    }
}