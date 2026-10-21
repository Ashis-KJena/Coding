#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    float a=M_PI * pow(r,2);
    printf("The area of circle with %f radius is %f", r,a);
    return 0;

}
