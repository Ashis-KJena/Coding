#include<stdio.h>
#include<stdlib.h>
int main(){
    char v;
    int h,b;
    printf("Enter vehicle type (H/L):");
    scanf(" %c",&v);
    printf("Enter number of hours:");
    scanf("%d",&h);
    if(v=='H' || v=='h'){
        if(h<=5)
            b=h*20;
        else
            b=5*20+(h-5)*40;
        printf("Parking charges = Rs. %d",b);
    }
    else if(v=='L' || v=='l'){
        if(h<=3)
            b=h*10;
        else
            b=3*10+(h-3)*30;
        printf("Parking charges = Rs. %d",b);
    }
    else
        printf("Invalid vehicle type");
    return 0;
}