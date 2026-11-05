#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[5],i;
    for(i=0;i<5;i++){
        printf("Enter the %d index of array:",i);
        scanf("%d", &a[i]);
    }
    printf("Array is \n");
    for(i=0;i<5;i++)
    printf("%d ", a[i]);
    
    return 0;
}