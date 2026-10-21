#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
    int s=a+b;
    printf("The sum of %d and %d is %d.\n", a,b,s);
    return 0;
    
}