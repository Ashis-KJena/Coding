#include<stdio.h>
#include<stdlib.h>
int main() {
    int s;
    printf("Enter the side value of a square: ");
    scanf("%d", &s);
    int p= 4*s;
    int a= s*s;
    printf(" AREA = %d  PERIMETER = %d", a,p);
    return 0;
    
}