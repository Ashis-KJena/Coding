/*Write a program to convert user input GPA into percentage.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a;
    printf("Enter your GPA:");
    scanf("%f", &a);
    float p=(a-0.5)*10;
    printf("The value obatined is %f percentage.",p);
    return 0;
}
