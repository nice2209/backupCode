#include <stdio.h>
#include <time.h>
#pragma warning(disable:4996)

int main()
{
    clock_t t1, t2;
    int count = 0;

    t1 = clock();
    for (;;)
    {
        printf("ī���� = %d\n", count++);
        t2 = clock();
        if (t2 - t1 > CLOCKS_PER_SEC)
        {
            break;
        }
    }
    printf("�������ϴ�.\n");
}