#include <stdio.h>
int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    float average = (x + y + z)/3;
    printf("Average: %f",average);
    return 0;
}