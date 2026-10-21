#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    float t,r;
    printf("Enter polar coordinates r, theta(degree):");
    scanf("%f %f", &r, &t);
    t=(M_PI/180)*t;
    float y=r*sin(t);
    float x=r*cos(t);
    printf("Catersian Coordinates are %f and %f", x,y);
    return 0;
}