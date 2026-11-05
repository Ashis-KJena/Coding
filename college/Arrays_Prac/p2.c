#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[10],i,s;
    s=0;
    float avg;
    for(i=0;i<10;i++){
        printf("Enter the %d element of arrray:", i+1);
        scanf("%d", &a[i]);
        s = s+a[i];
    }
    avg=((float)s/10);
    printf("Averge is %.2f", avg);
    return 0;
}