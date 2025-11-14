#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);  // fix: use &n
    printf("You entered %d\n", n);
    return 0;
}
