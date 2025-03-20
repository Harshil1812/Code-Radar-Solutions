#include <stdio.h>

int getLowestSetBitPosition(int n) {
    if (n == 0) return 0; // No set bit

    int position = 1; // Position starts from 1 (not 0-based)
    while ((n & 1) == 0) { // Keep shifting right until we find 1
        n >>= 1;
        position++;
    }
    return position;
}

int main() {
    int num;

    scanf("%d", &num);
    
    int pos = getLowestSetBitPosition(num);
    if (pos)
        printf("Lowest set bit is at position: %d\n", pos);
    else
        printf("No set bits found.\n");

    return 0;
}
