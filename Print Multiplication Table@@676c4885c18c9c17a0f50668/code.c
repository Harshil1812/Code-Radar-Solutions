#include<stdio.h>
int main(){
    int a;
    scanf("%f",&a);
    for(int i = 1; i<=10;i++){
        printf("%d x %d = %d\n", a, i, a * i);
    }
    return 0;
}