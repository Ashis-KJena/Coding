#include<stdio.h>
#include<stdlib.h>
int main() {
    int t;
    printf("Enter the time in seconds:");
    scanf("%d", &t);
    int h=t/3600;
    int rs=t%3600;
    int m=rs/60;
    int s=rs%60;
    printf("%d Hours %d minutes %d seconds",h,m,s);
    return 0;
}