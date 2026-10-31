#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    if(a>=b)
        if(a==b)
            printf("Equal");
        
        else
            printf("%d>%d",a,b);
    else
            printf("%d<%d",a,b);
        
    
        return 0;
}