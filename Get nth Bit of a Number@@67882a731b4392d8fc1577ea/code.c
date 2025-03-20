

#include <stdio.h>

// Function to get the nth bit of a number
int getNthBit(int num, int n) {
    return (num >> n) & 1;
}

int main() {
    int num, n;
    
    // Input the number and the bit position

    scanf("%d", &num);

    scanf("%d", &n);
    
    // Get the nth bit
    int bitValue = getNthBit(num, n);
    
    // Print the result
    printf("%d",bitValue);
    
    return 0;
}
