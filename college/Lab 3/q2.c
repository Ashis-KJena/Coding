/*Write a program where you can take input of two float numbers and print their sum, 
difference, product, quotient and remainder.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a,b;
    printf("Enter the values of two numbers:");
    scanf(" %f %f", &a, &b);
    float s=a+b;
    float d=a-b;
    float p=a*b;
    int r= ((int)a)%((int)b);
    float q=a/b;
    printf("The sum of %f and %f is %f.\n", a,b,s);
    printf("The difference of %f and %f is %f.\n", a,b,d);
    printf("The product of %f and %f is %f.\n", a,b,p);
    printf("The remainder of %d and %d is %d.\n", ((int)a),((int)b),r);
    printf("The quotient of %f and %f is %f.\n",a,b,q);
    return 0;
}