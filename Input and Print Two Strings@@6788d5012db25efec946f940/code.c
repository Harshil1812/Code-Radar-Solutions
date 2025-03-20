#include <stdio.h>
#include <string.h>  // Needed for string operations

int main() {
    char str1[50], str2[50];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove newline

    printf("You entered: %s and %s\n", str1, str2);

    return 0;
}
