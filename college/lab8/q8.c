/* Insert a new element at any desired location 
at a partially filled array */
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,index,ele;
    printf("Enter array size:");
    scanf("%d", &n);
    int a[n+1];
    printf("Enter array elemeents:");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter index to enter element:");
    scanf("%d", &index);
    if(index<0 || index>n){
        printf("Invalid Index");
    }
    else{
        printf("Enter the element to insert:");
        scanf("%d", &ele);
        for(i=n;i>index;i--){
            a[i] = a[i-1];
        }
        a[index] = ele;
        n++;
        printf("New array is:\n");
        for(i=0;i<n;i++){
            printf("%d ", a[i]);
        }
    }
    return 0;
}