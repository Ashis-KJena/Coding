/* Calculate the area of a circle of radius 7 and 
modify the same program to calculate the volume of a cylinder
given its height and radius*/

#include <stdio.h>
int main() {
    int r=7;
    int h=10;
    printf("The area of a circle with radius %d is: %f", r, 3.14*r*r);
    // area of a circle is calculated using the formula A = πr²

    printf("\nThe volume of a cylinder with radius %d and height %d is: %f,",r,h,3.14*r*r*h);
    return 0;

}
