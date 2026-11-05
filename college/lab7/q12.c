#include<stdio.h>
#include<stdlib.h>
int main(){
    int binary,decimal,rem,weight;
    weight=1;
    decimal=0;
    printf("Enter a binary number:");
    scanf("%d", &binary);
    while(binary != 0){
        rem=binary%10;
        decimal=decimal+rem*weight;
        weight=weight*2;
        binary=binary/10;
    }
    printf("Decimal Equivalent is %d",decimal);
    return 0;
}