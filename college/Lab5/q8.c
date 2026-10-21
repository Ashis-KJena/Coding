#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main() {
    char c;
    printf("Enter a character:");
    scanf("%c", &c);
    if (isalpha(c)){
        if(isupper(c)){
            c= tolower(c);
            printf("Lower case is %c",c);
        }else
        printf("Its already a lower case");
    }else
    printf("Its not a letter");
    return 0;
}