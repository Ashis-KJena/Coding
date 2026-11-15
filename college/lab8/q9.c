//Delete  an element from a given position in an array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,index,ele;
    printf("Enter array size:");
    scanf("%d", &n);
    int a[n+1];
    printf("Enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter index for element to delete:");
    scanf("%d", &index);
    if(index<0 || index>=n){
        printf("Invalid Index");
    }
    else
    {
        for(i=index;i<n-1;i++){
            a[i]=a[i+1];
        }
        n--;
        printf("New array is:\n");
        for(i=0;i<n;i++){
            printf("%d ", a[i]);
        }
    }
    return 0;
}