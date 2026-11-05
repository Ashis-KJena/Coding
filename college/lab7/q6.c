#include<stdio.h>
#include<stdlib.h>
int main(){
    int t1,t2,c,i,n;
    t1=0;
    t2=1;
    printf("Enter the limit where you want to stop:");
    scanf("%d", &n);
    printf("%d ",t2);
    do{
        c=t1+t2;
        t1=t2;
        t2=c;
        if(c<=n)
        printf("%d ",c);
    }while(c<n);
    return 0;
}