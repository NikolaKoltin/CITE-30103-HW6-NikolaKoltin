#include <stdio.h>

int main() {
    int a = 5, b = 3, res;

    // Correction 1
    res = a + (b << 1);
    printf("Using parentheses: res = %d\n", res);

    // Correction 2
    res = a + (b * 2);
    printf("Using arithmetic: res = %d\n", res);

    return 0;
}
