#include <stdio.h>

int main() {
    int n, rev = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int original = n; 

    while (n > 0) {
        int digit = n % 10;   // get last digit
        rev = rev * 10 + digit; // build reversed number
        n /= 10;              // remove last digit
    }

    printf("Original number: %d\n", original);
    printf("Reversed number: %d\n", rev);

    return 0;
}
