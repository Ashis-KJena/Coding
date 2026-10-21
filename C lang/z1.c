#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    do {
        printf("Enter a number: \n");
        scanf("%d", &n);
    } while (n !=0);
    printf("Program ended\n");
    return 0;
}