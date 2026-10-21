#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
float a,b,c;
printf("Enter a,b and c respectively:");
scanf("%f %f %f", &a, &b, &c);
int d= pow(b,2)-4*a*c;
if (d>0) {
    float r1=((-b+sqrt(d))/(2*a));
    float r2=((-b-sqrt(d))/(2*a));
    printf("Roots are %f and %f", r1,r2);
}
else if(d==0){
    float r1=-b/(2*a);
    printf("Both the roots are %f", r1);
}
else
printf("Roots are imaginary");
return 0;
}