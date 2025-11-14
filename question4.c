#include <stdio.h>
int main(void) {
    int a = 5, b = 10;
    float avg = (a + b) / 2.0;  // use 2.0 not 2
    printf("Average = %.2f\n", avg);
    return 0;
}
