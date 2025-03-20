#include <stdio.h>

int toggleNthBit(int num, int n) {
    return num ^ (1 << n);
}

int main() {
    int num, n;
    
    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the bit position to toggle (0-based index): ");
    scanf("%d", &n);

    // Toggle nth bit
    int result = toggleNthBit(num, n);

    printf("Number after toggling %dth bit: %d\n", n, result);

    return 0;
}
