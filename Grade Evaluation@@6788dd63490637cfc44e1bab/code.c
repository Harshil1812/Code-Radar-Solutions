#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x == 'A'){
        printf("Excellemt");
    }
    else if( x == 'B'){
        printf("Good");
    }
    else if( x == 'C'){
        printf("Average");
    }
    else if( x == 'D'){
        printf("Below Average");
    }
    else if( x == 'F'){
        printf("Fail");
    }
    return 0;
}