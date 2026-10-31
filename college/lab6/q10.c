#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m;
    printf("Enter marks obtained:");
    scanf("%d", &m);
    if (m >= 90 && m <= 100)
        printf("O grade");
    else if (m >= 80)
        printf("E grade");
    else if (m >= 70)
        printf("A grade");
    else if (m >= 60)
        printf("B grade");
    else if (m >= 50)
        printf("C garde");
    else if (m >= 40)
        printf("D grade");
    else if (m >= 0 && m < 40)
        printf("U grade");
    else
        printf("Invalid marks");
    return 0;
}