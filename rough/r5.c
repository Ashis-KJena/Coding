#include<stdio.h>
#include<stdlib.h>
int main () {
    int m;
    printf("Enter marks obtained:");
    scanf("%d", &m);
    char g=(m>=90)?'A':(m>=80)?'B':(m>=70)?'C':(m>=60)?'D':(m>=50)?'E':(m<=40)?'U':'F';
    printf("Grades obtained is %c",g);
    return 0;

}