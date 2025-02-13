#include <stdio.h>
int main(){
    char z;
    scanf("%c",&z)
    int x , y;
    scanf("%d %d",&x, &y);
    switch(z) {
        case '+':
        result = x + y;
        printf("%d", x , y ,result);
        break;
         case '-':
        result = x - y;
        printf("%d", x , y ,result);
        break;
        case '*':
        result = x * y;
        printf("%d", x , y ,result);
        break;
        case '/':
        result = x / y;
        printf("%d", x , y ,result);
        break;
        else {
            printf("error")
        }

    }
    return 0;

}