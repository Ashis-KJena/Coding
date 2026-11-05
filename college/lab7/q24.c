#include<stdio.h>
#include<stdlib.h>
int main(){
    int start,end,i,j;
    int f=0;
    printf("Enter start:");
    scanf("%d", &start);
    printf("Enter stop:");
    scanf("%d", &end);
    for(i=start;i<=end;i++){
        f=0;
        if(i<=1)
        continue;
        for(j=2;j<i;j++){
            if(i%j==0){
                f=1;
                break;
            }
        }
        if(f==0)
        printf("%d ", i);
    }
    return 0;
}