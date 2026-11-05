#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[5],i,max;
    max = 0;
    for(i=0;i<5;i++){
        scanf("%d", &a[i]);
    }
    for(i=1;i<5;i++){
        if(a[i]>a[max])
        max = i;
    }
    printf("%d is maximum",a[max]);
    return 0;
}