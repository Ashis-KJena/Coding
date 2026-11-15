//Sum of all elements present in an array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    int sum=0;
    printf("Enter array size:");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    printf("Sum is %d", sum);
    return 0;
}