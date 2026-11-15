//count number of odd elements in an array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    int count =0;
    printf("Enter number size:");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("Odd number of elements are:");
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}