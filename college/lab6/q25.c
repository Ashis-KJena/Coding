#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c;
    printf("Enter the three sides of triangle:");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b){
        printf("Valid triangle\n");
        if(a==b && b==c)
            printf("Equilateral triangle");
        else if(a==b || b==c || c==a)
            printf("Isosceles triangle");
        else
            printf("Scalene triangle");
        if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
            printf("\nRight angled triangle");
    }
    else
        printf("Invalid triangle");
    return 0;
}