#include<stdio.h>
#include<stdlib.h>
int main() {
    /*printf("Three types of loop to print 1-10\n");
    int i;
    for(i=1;i<=10;i++){
        printf("%d\n",i);
    }
    int n=1;
    while(n<=10){
        printf("%d\n",n);
        n++;
    }*/
    int c=1;
    do{
        printf("%d\n",c);
        c++;
    }
    while(c<=10);
    return 0;
}