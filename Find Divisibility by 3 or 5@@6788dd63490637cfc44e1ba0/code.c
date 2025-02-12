#include <stdio.h>
int main() {
    int x , y;
    scanf("%d",&x);
    if (x % 3 == 0){
        printf("Divisible by 3");
    }
    else if (x % 5 == 0){
        printf("Divisible by 5");
    }
    else if (x % 3 == 0 || x % 5 == 0){
        printf("Divisible by Both");
    }
    else{
        printf("Divisible by Neither");
    }
    return 0;
}
B