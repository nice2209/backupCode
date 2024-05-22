#include <stdio.h>
#include <time.h>
#include <conio.h>

int main(void)
{
    register long i;
    int k;
    clock_t start, finish;
    start = clock();
    for(k = 0; k < 100; k++)
    {
        for(i = 0; i < 60000; i++)
        {
            finish = clock();
            printf("측정값 = %lf\n", (float)(finish - start));
        }
    }
}