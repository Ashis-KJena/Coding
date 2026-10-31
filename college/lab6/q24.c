#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y;
    printf("Enter X and Y coordinates:");
    scanf("%d %d", &x, &y);
    if(x>0 && y>0)
    printf("Quadrant 1");
    else if(x<0 && y>0)
    printf("Quadrant 2");
    else if(x<0 && y<0)
    printf("Quadrant 3");
    else if(x>0 && y<0)
    printf("Quadrant 4");
    else if(x==0 && y!=0)
    printf("Lies in Y axis");
    else if(y==0 && x!=0)
    printf("Lies in X axis");
    else
    printf("Its origin");
    return 0;
}