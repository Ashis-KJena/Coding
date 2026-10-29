#include<stdio.h>
#include<stdlib.h>
int main(){
    int k=1;
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("%d",k++);
        }
        printf("\n");
    }
    return 0;
}