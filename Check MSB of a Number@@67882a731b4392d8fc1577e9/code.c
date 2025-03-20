#include <stdio.h>

int main() {
    int num;
    
    // Taking input from the user

    scanf("%d", &num);
    
    // Checking MSB using bitwise AND with 0x80000000 (Most Significant Bit mask)
    if (num & (1 << 31))  
        printf("Set", num);
    else
        printf("Not Set", num);

    return 0;
}
