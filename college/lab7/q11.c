#include<stdio.h>
#include<stdlib.h>
int main(){
    int d,i,b,r;
    b=0;
    i=1;
    printf("Enter decimal number:");
    scanf("%d", &d);
    while(d>0){
        r=d%2;
        b=b+(r*i);
        i=i*10;
        d=d/2;
    }
    printf("Binary is %d",b);
    return 0;
}