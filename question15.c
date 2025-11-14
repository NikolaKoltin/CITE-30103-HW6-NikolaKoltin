#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;

    printf("Enter marks for 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    // Check if all marks >= 40
    if (m1 >= 40 && m2 >= 40 && m3 >= 40 && m4 >= 40 && m5 >= 40) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

    return 0;
}
