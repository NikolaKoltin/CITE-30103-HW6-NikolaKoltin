#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check divisibility using logical operators
    if ((num % 2 == 0) && (num % 3 == 0) && !(num % 7 == 0)) {
        printf("%d is divisible by 2 and 3 but not 7.\n", num);
    } else {
        printf("%d does NOT meet the condition.\n", num);
    }

    return 0;
}
