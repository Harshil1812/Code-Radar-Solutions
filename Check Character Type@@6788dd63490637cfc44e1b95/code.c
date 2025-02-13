#include <stdio.h>
#include <ctype.h> /*for isdigit function*/

int main() {
    char x;
    scanf("%c", &x);
    
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || 
        x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') {
        printf("Vowel\n");
    }
    else if (isalpha(x)) {
        printf("Consonant\n");
    }
    else if (isdigit(x)) {
        printf("Digit\n");
    }
    else {
        printf("Special Character\n");
    }
    
    return 0;
}
