#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,key;
    int flag =0;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter element:");
        scanf("%d", &a[i]);
    }
    printf("Enter the element to search:");
    scanf("%d", &key);
    for(i=0;i<n;i++){
        if(key==a[i]){
            printf(" %d is at index %d and element number %d", key,i,i+1);
            flag =1;
        }
    }
    if(flag == 0)
    printf("Element Not Found");
    return 0;
}