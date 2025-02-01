#include<stdio.h>
int main() {
    char name[50];
    scanf("%s",name);
    int age;
    scanf("%d",&age);
    char hobby[50];
    scanf("%s",hobby);
    printf("Name: /n Age: /n Hobby: %s%d%s", name,age,hobby);
    return 0;
}