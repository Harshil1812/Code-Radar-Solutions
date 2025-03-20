#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Performing one's complement using bitwise NOT (~)
    int result = ~num;

    // Printing the result
    printf("%d", result);

    return 0;
}
