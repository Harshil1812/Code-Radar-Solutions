#include <stdio.h>

int main() {
    int num;

    // Taking input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Performing one's complement using bitwise NOT (~)
    int result = ~num;

    // Printing the result
    printf("Result: %d\n", result);

    return 0;
}
