#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,temp,digit,rev,start,end;
    printf("Enter the range:");
    scanf("%d%d",&start,&end);
    for(i=start;i<=end;i++){
        n=i;
        temp=i;
        rev=0;
        while(n>0){
            digit=n%10;
            rev=rev*10+digit;
            n=n/10;
        }
        if(temp==rev){
            printf("%d ",i);
        }
    }
    return 0;
}