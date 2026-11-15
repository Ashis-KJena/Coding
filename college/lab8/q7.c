//Find element wise addition of two arrays
#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i;
printf("Enter array size:");
scanf("%d", &n);
int a[n],b[n],c[n];
printf("Enter first array elements:");
for(i=0;i<n;i++){
    scanf("%d", &a[i]);
}
printf("Enter second array elements:");
for(i=0;i<n;i++){
    scanf("%d", &b[i]);
}
for(i=0;i<n;i++){
    c[i]=a[i]+b[i];
}
printf("Sum array is ");
for(i=0;i<n;i++){
    printf("%d ", c[i]);
}
return 0;
}