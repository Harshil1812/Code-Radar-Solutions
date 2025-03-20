#include <stdio.h>

int main() {
    int a, b, result;
    
    // Taking input from user
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    // Performing bitwise OR operation
    result = a | b;
    
    // Displaying the result
    printf("Result of %d | %d = %d\n", a, b, result);
    
    return 0;
}

