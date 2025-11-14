#include <stdio.h>

int main() {
    int a, b;
    float result;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Integer division (a / b) = %d\n", a / b);

    // Floating-point division using implicit casting
    result = a / (float)b; 
    printf("Floating-point division (implicit cast) = %.2f\n", result);

    // Floating-point division using explicit cast
    result = (float)a / (float)b;
    printf("Floating-point division (explicit cast) = %.2f\n", result);

    return 0;
}
