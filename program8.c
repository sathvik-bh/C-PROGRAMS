#include <stdio.h>
int main() {
    const float PI = 3.14;
    float r;

    printf("Enter radius: ");
    scanf("%f", &r);

    float area = PI * r * r;
    printf("Area of circle = %.2f", area);

    return 0;
}
