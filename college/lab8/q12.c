//Merge the content of two arrays into 3rd array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,m;
    printf("Enter 1st Array size:");
    scanf("%d", &n);
    int a[n];
    printf("1st Array elements:");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter 2nd Array size:");
    scanf("%d", &m);
    int b[m];
    printf("2nd Array element:");
    for(i=0;i<n;i++){
        scanf("%d", &b[i]);
    }
    int c[n+m];
    for(i=0;i<n;i++){
        c[i]=a[i];
    }
    for(i=0;i<m;i++){
        c[n+i]=b[i];
    }
    printf("Merged array is:");
    for(i=0;i<(m+n);i++){
        printf("%d ", c[i]);
    }
    return 0;
}