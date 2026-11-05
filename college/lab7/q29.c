#include<stdio.h>
#include<stdlib.h>
int main(){
    int oct,decimal,rem,weight;
    weight=1;
    decimal=0;
    printf("Enter a octal number:");
    scanf("%d", &oct);
    while(oct != 0){
        rem=oct%10;
        decimal=decimal+rem*weight;
        weight=weight*8;
        oct=oct/10;
    }
    printf("Decimal Equivalent is %d",decimal);
    return 0;
}