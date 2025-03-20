#include <stdio.h>

int main() {
    double num;

    printf("Enter a double-precision number: ");
    scanf("%lf", &num);  // Read a double using %lf

    printf("You entered: %lf\n", num);  // Print the number with default precision
    printf("Formatted: %.2lf\n", num);  // Print with 2 decimal places

    return 0;
}
Loading Code...