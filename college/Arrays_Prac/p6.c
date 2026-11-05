#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,min;
    int a[5]={35,67,23,91,12};
    min=0;
    for(i=1;i<5;i++){
        if(a[i]<a[min])
        min = i;
    }
    printf("Minimum is %d", a[min]);
    return 0;
}