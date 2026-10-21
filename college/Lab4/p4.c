#include<stdio.h>
#include<stdlib.h>
int main () {
    int l,b;
    printf(" Enter the lenght of rectangle: ");
    scanf("%d", &l);
    printf("Enter the breadth of rectangle: ");
    scanf("%d", &b);
    int p= 2*(l+b);
    int a= l*b;
    printf(" AREA = %d  PERIMETER = %d", a,p);
    return 0;

}