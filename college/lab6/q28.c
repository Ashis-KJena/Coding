#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);
    if(isalpha(ch))
    if(islower(ch))
    printf("Upper case is %c",toupper(ch));
    else
    printf("Lower case is %c",tolower(ch));
    else
    printf("Special Character");
    return 0;
}