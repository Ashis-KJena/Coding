#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    (n%2>=0)?(printf("Absolute value is %d",n)):(printf("Absolute value is %d",-1*n));
    return 0;
}
