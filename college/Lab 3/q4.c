/*  Write a program to convert 
a. fahrenheit to celsius
b. celsius to fahrenheit
c. celsius to kelvin
d. kelvin to fahrenheit  */
#include<stdio.h>
#include<stdlib.h>
int main() 
{
    float c,k,f;
// farenheit to celcius
     printf("Enter the value in fahrenheit:");
     scanf("%f",&f);
     float cel=5*(f-32)/9;
     printf("The value of %f fahrenheit in celsius is %f.\n", f,cel);
    //celsius to fahrenheit 
    printf("Enter the value in celsius:");
    scanf("%f",&c);
    float far=((9*c/5)+32);
    printf("The value of %f celsius in fahrenheit is %f.\n", c, far);
    //celsius to kelvin conversion
    printf("Enter the value in celsius:");
    scanf("%f", &c);
    float kel= c+273;
    printf("The value of %f celsius in kelvin is %f.\n", c,kel);
//kelvin to fahrenheit part, we go from K to C to F.
printf("Enter the value in kelvin:");
scanf("%f",&k);
float fr= (9*(k-273))/5 + 32;
printf("The value of %f kelvin in fahrenheit is %f.\n",k,fr);
return 0;

}
