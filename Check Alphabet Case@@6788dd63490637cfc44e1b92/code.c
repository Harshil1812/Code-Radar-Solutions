#include <stdio.h>
int main(){
    char x;
    scanf("%c",x);
    if(x>='A' && x<='Z'){
        printf("Uppercase");
    }
    else if(x>='a' && x<='z'){
        printf("Lowercase");
    }
    return 0;
}