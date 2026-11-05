#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int start,end,i,n,temp,digit,count,sum;
    printf("Enter the range:");
    scanf("%d%d",&start,&end);
    for(i=start;i<=end;i++){
        n=i;
        temp=i;
        count=0;
        sum=0;
        while(n>0){
            count++;
            n=n/10;
        }
        n=i;
        while(n>0){
            digit=n%10;
            sum=sum+pow(digit,count);
            n=n/10;
        }
        if(sum==temp){
            printf("%d ",i);
        }
    }
    return 0;
}