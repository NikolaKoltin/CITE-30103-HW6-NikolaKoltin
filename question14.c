#include <stdio.h>

int main() {
    int num;
    char *result;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Conditional operator to determine sign
    result = (num > 0) ? "positive" : ((num < 0) ? "negative" : "zero");

    printf("The number %d is %s.\n", num, result);

    return 0;
}
