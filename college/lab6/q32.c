#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,a,b,s,d,p,q;
    while(1){
    printf("Enter number 1:");
    scanf("%d", &a);
    printf("Enter number 2:");
    scanf("%d", &b);
    printf("Enter a choice: \n 1. +\n2. -\n3.*\n4./\n");
    scanf("%d", &n);
    s=a+b;
    d=a-b;
    p=a*b;
    q=a/b;
    switch(n){
        case 1: printf("%d\n",s);
        break;
        case 2: printf("%d\n",d);
        break;
        case 3: printf("%d\n",p);
        break;
        case 4:
        if(b!=0)
            printf("Result = %d\n",q);
        else
            printf("Division by zero is not possible");
    break;
    case 5: exit(0);
    default: printf("Invalid operator");
    }
}
    return 0;
}