#include <stdio.h>

int main() {
    int num;

    // Taking input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Checking LSB using bitwise AND
    if (num & 1)
        printf("LSB of %d is set (1)\n", num);
    else
        printf("LSB of %d is not set (0)\n", num);

    return 0;
}
