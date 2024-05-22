#include <stdio.h>

int main() {
    int numbers[5];
    int total = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        total += numbers[i] * numbers[i];
    }

    printf("%d\n", total % 10);

    return 0;
}