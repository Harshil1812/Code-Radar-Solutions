#include <stdio.h>
int main(){
    char x;
    scanf("%s",x);
    if(x>='A' && x<='Z'){
        printf("Uppercase");
    }
    else(x>='a' && x<='z'){
        printf("Lowercase");
    }
    return 0;
}