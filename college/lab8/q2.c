// print all even elements in a array
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    printf("Enter array size:");
    scanf("%d", &n);
    int a[n];
    printf("Enter all elements in array:");
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Even elements are:");
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            printf("%d ", a[i]);
        }
    }
    return 0;
}