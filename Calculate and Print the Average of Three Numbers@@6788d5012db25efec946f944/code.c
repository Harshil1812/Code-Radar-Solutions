#include <stdio.h>
int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int average = (x + y + z)/3;
    printf("Average: %d",average);
    return 0;
}