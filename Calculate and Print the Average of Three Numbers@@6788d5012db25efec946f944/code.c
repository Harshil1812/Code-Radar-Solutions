#include <stdio.h>
int main() {
    float x,y,z;
    scanf("%f %f %f",&x,&y,&z);
    float average = (x + y + z)/3;
    printf("Average: %.2f",average);
    return 0;
}