#include <stdio.h>
int main() {
    int m1, m2, m3;
    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    int total = m1 + m2 + m3;
    float avg = total / 3.0;

    printf("Total = %d\n", total);
    printf("Average = %.2f", avg);

    return 0;
}
