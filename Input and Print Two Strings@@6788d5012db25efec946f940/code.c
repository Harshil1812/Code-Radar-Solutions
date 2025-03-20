#include <stdio.h>

int main() {
    char str1[50], str2[50];

    printf("Enter first string: ");
    scanf("%49s", str1);  // Reads first string (stops at space)

    printf("Enter second string: ");
    scanf("%49s", str2);  // Reads second string (stops at space)

    printf("You entered: %s and %s\n", str1, str2);

    return 0;
}

