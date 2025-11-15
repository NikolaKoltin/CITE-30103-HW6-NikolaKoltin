#include <stdio.h>

int main() {
    int count = 0;

    for (int i = 1; i <= 50; i++) {

        if (i % 5 == 0) 
            continue;   // skip multiples of 5

        if (i == 40) 
            break;      // stop at 40

        printf("%d ", i);
        count++;
    }

    printf("\nNumbers displayed: %d\n", count);

    return 0;
}
