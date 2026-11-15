//WAP to print ekements of an array and its elements
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    printf("Enter array size:");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        printf("Element %d Address %p \n", a[i], &a[i]);
    }
    return 0;
}