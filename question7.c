#include <stdio.h>

#define PI_DEFINE 3.14159

int main() {

    const float PI_CONST = 3.14159;
    float radius;
    float area_define, area_const, circumference_define, circumference_const;


    printf("Enter radius: ");
    scanf("%f", &radius);


    area_define = PI_DEFINE * radius * radius;
    circumference_define = 2 * PI_DEFINE * radius;

  
    area_const = PI_CONST * radius * radius;
    circumference_const = 2 * PI_CONST * radius;

    printf("\nUsing #define for PI:\n");
    printf("Area = %.2f\n", area_define);
    printf("Circumference = %.2f\n", circumference_define);

    printf("\nUsing const for PI:\n");
    printf("Area = %.2f\n", area_const);
    printf("Circumference = %.2f\n", circumference_const);

    return 0;
}
