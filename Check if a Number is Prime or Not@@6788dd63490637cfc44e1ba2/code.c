#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;  // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i * i <= num; i++) {  // Check divisibility up to √num
            if (num % i == 0) {
                isPrime = 0;  // Found a divisor, so it's not prime
                break;
            }
        }
    }

    if (isPrime)
        printf("%d Prime");
    else
        printf("%d Not Prime");

    return 0;
}
