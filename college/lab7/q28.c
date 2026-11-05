#include<stdio.h>
#include<stdlib.h>
int main(){
    int d,i,o,r;
    o=0;
    i=1;
    printf("Enter decimal number:");
    scanf("%d", &d);
    while(d>0){
        r=d%8;
        o=o+(r*i);
        i=i*10;
        d=d/8;
    }
    printf("Octal is %d",o);
    return 0;
}