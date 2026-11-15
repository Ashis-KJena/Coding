//Swap any two elements of an array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,x,y,t;
    printf("Enter array size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter two indexes to swap:");
    scanf("%d %d", &x, &y);
    t=a[x];
    a[x]=a[y];
    a[y]=t;
    printf("Swapped array:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}