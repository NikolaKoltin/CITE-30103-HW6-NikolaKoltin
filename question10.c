#include <stdio.h>

int main() {
    char c;
    int i;
    long int li;
    float f;
    double d;

    printf("Size of char variable = %zu bytes\n", sizeof(c));
    printf("Size of int variable = %zu bytes\n", sizeof(i));
    printf("Size of long int variable = %zu bytes\n", sizeof(li));
    printf("Size of float variable = %zu bytes\n", sizeof(f));
    printf("Size of double variable = %zu bytes\n", sizeof(d));

    return 0;
}
