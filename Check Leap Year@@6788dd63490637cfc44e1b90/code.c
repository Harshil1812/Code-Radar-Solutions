#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    if(x / 4 || x !/ 100 || x / 400){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}