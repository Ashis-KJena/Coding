#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,max;
    int a[5]={35,67,23,91,12};
    max=0;
    for(i=1;i<5;i++){
        if(a[i]>a[max])
        max = i;
    }
    printf("Maximum is %d", a[max]);
    return 0;
}