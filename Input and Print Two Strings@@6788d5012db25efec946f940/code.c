#include <stdio.h>

int main() {
    char str1[50], str2[50];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    printf("You entered: %s and %s", str1, str2);

    return 0;
}
