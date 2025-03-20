#include <stdio.h>

int toggleNthBit(int num, int n) {
    return num ^ (1 << n);
}

int main() {
    int num, n;
    
    // Input from user

    scanf("%d", &num);

    scanf("%d", &n);

    // Toggle nth bit
    int result = toggleNthBit(num, n);

    printf("%d",result);

    return 0;
}
