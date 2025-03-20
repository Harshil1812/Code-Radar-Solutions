#include <stdio.h>

int main() {
    double num;

    scanf("%lf", &num);  // Read a double using %lf

    printf("You entered: %.4lf\n", num);  // Print the number with default precision


    return 0;
}
