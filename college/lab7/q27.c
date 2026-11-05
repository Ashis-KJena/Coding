#include<stdio.h>
#include<stdlib.h>
int main(){
    int start,end,i,j;
    printf("Start:");
    scanf("%d", &start);
    printf("End:");
    scanf("%d", &end);
    for(i=start;i<=end;i++){
        for(j=1;j<=10;j++){
            printf(" %d * %d = %d \n", i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}