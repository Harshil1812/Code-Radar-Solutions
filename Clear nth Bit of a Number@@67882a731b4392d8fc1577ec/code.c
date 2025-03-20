#include <stdio.h>

// Function to clear the nth bit
int clearNthBit(int num, int n) {
    return num & ~(1 << n);
}

int main() {
    int num, n;
    
    // Input number and bit position to clear
    printf("Enter the number: ");
    scanf("%d", &num);
    
    printf("Enter the bit position to clear (0-based index): ");
    scanf("%d", &n);

    // Output the result
    int result = clearNthBit(num, n);
    printf("Number after clearing %dth bit: %d\n", n, result);

    return 0;
}
