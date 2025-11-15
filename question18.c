#include <stdio.h>

int main() {
    double a, b;
    char op;

    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+':
            printf("%.2lf\n", a + b);
            break;

        case '-':
            printf("%.2lf\n", a - b);
            break;

        case '*':
            printf("%.2lf\n", a * b);
            break;

        case '/':
            if (b == 0) {
                printf("Error: Division by zero\n");
            } else {
                printf("%.2lf\n", a / b);
            }
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}
