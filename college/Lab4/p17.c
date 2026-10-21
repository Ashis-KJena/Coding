#include<stdio.h>
#include<stdlib.h>
int main() {
    int d;
    printf("Enter the number of days: ");
    scanf("%d", &d);
    int y=d/365;
    int rd=d%365;
    int m=rd/30;
    int nd=rd%30;
    printf("Years = %d, Month = %d and Days = %d", y,m,nd);
    return 0;
}