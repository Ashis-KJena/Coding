#include <stdio.h>
int main()
{
    float i, t;
    printf("Enter your total taxable income (in Rs.): ");
    scanf("%f", &i);

    if (i >= 0 && i <= 300000)
        t = 0;
    else if (i <= 700000)
        t = i * 0.05;
    else if (i <= 1000000)
        t = i * 0.10;
    else if (i <= 1200000)
        t = i * 0.15;
    else if (i <= 1500000)
        t = i * 0.20;
    else if (i > 1500000)
        t = i * 0.30;
    else
    {
        printf("Invalid income");
        return 0;
    }

    printf("Income tax payable: Rs. %.2f", t);
    return 0;
}