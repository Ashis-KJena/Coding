#include<stdio.h>
#include<stdlib.h>
int main() {
    float c;
    printf("Enter you cgpa:\n");
    scanf("%f", &c);
    float p= (c-0.5)*10;
    printf("percentage is %f", p);
    return 0;
}
