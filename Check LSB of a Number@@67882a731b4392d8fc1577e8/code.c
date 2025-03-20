#include <stdio.h>

int main() {
    int num;

    // Taking input from user
  
    scanf("%d", &num);

    // Checking LSB using bitwise AND
    if (num & 1)
        printf("Set", num);
    else
        printf("Not Set", num);

    return 0;
}
