#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(islower(ch))
        printf("Lowercase");
    else if(isupper(ch))
        printf("Uppercase");
    else if(isdigit(ch))
        printf("Digit");
    else
        printf("Special character");
    return 0;
}