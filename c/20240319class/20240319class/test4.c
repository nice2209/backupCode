#include <stdio.h>

int main()
{
    unsigned char ch = 255, mask = 0x7F;

    printf("%d\n", ch);
    printf("%d\n", ch & mask);
    printf("%d\n", (char)~ch);
    printf("%d\n", ch ^ ch);
    printf("%d\n", ch >> 1);
    printf("%d\n", mask << 1);
}