#include <stdio.h>
#include <stdlib.h>
int main()
{
    float p, d, fp;
    printf("Enter your purchase amount:");
    scanf("%f", &p);
    if (p < 1000)
        d = 0;
    else if (p <= 3000)
        d = 0.05 * p;
    else if (p <= 6000)
        d = p * 0.07;
    else if (p <= 10000)
        d = p * 0.1;
    else
        d = 2000;
    fp = p - d;
    printf("%.2f original amount\n %.2f discount\n %.2f amount paybale", p, d, fp);
    return 0;
}