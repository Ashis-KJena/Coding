#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float cp, sp, p, l;
    printf("Enter the cost price:");
    scanf("%f", &cp);
    printf("Enter the selling price:");
    scanf("%f", &sp);
        p = sp - cp;
    l = cp - sp;
    float pp = (p / cp) * 100;
    float ll = (l / cp) * 100;
    if (sp >= cp)
        if (sp == cp)
            printf("No profit No loss");
        else
        {
            printf("Profit is %.2f\n", p);
            printf("profit percentage is %.2f", pp);
        }
    else
    {
        printf("Loss is %.2f\n", l);
        printf("Loss percentage is %.2f", ll);
    }
    return 0;
}