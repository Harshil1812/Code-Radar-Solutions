

#include <stdio.h>

// Function to get the nth bit of a number
int getNthBit(int num, int n) {
    return (num >> n) & 1;
}

int main() {
    int num, n;
    
    // Input the number and the bit position
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the bit position (0-based index): ");
    scanf("%d", &n);
    
    // Get the nth bit
    int bitValue = getNthBit(num, n);
    
    // Print the result
    printf("The %dth bit of %d is: %d\n", n, num, bitValue);
    
    return 0;
}
