//Find the largest element in an array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int max,i,n;
    printf("Enter array size:");
    scanf("%d", &n);
    int a[n];
    max=0;
    printf("Enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("Max element is %d", max);
    return 0;
}