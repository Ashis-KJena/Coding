/* Create a program to find the area of a rectangle 
take the inputs from the user */
#include<stdio.h>
int main() {
    int length;
    int breadth;
     scanf("%d", &length);
     scanf("%d", &breadth);
     int area= length*breadth;
     printf("The area of rectange is: %d", area);
     return 0;
}
