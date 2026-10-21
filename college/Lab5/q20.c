#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    float x,y;
    printf("Enter cartesian coordintes X and Y:");
    scanf("%f %f", &x, &y);
    float r=sqrt(pow(x,2)+pow(y,2));
    float t=atan(y/x);
    float d=(180/M_PI)*t;
    printf("Polar Coordinates are %f and %f", r,d);
    return 0;
}