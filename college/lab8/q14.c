//Input two arrays and check whether they are equal or not
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,flag=0;
    printf("Enter array size:");
    scanf("%d", &n);
    int a[n],b[n];
    printf("Enter elements of first array:");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter elements of 2nd array:");
    for(i=0;i<n;i++){
        scanf("%d", &b[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]!=b[i]){
            flag = 1;
            printf("Not Equal");
            break;
        }
    }
    if(flag==0){
        printf("equal");
    }
    return 0;
}