#include <stdio.h>
int main() {
    float km;
    printf("Enter kilometers: ");
    scanf("%f", &km);

    printf("Meters = %.2f\n", km * 1000);
    printf("Centimeters = %.2f\n", km * 100000);

    return 0;
}
