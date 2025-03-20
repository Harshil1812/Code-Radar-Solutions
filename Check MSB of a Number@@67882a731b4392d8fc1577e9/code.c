#include <stdio.h>

int main() {
    int num;
    
    // Taking input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Checking MSB using bitwise AND with 0x80000000 (Most Significant Bit mask)
    if (num & (1 << 31))  
        printf("MSB of %d is set (1)\n", num);
    else
        printf("MSB of %d is not set (0)\n", num);

    return 0;
}
