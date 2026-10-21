#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char c;
    printf("Enter a character:");
    scanf("%c", &c);
    if (isalpha(c)){
        if(islower(c)){
            c=toupper(c);
            printf("Upper case is %c", c);
        }else
        printf("Its already a upper case");
    }else
    printf("Its not a letter");
    return 0;
}