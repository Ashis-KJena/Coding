#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int a,b,c;
    printf("Enter the three sides of a triangle:");
    scanf("%d %d %d", &a, &b, &c);
    // If-else to check if we can form a triagnle or not.
    if (a+b>c && b+c>a && a+c>b) {
    int s=(a+b+c)/2;
    float ar=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of a triangle is %f",ar);}
    else 
    printf("These sides cannot form a triangle.");
    return 0;
}