#include<stdio.h>
#include<stdlib.h>
int main() {
    int k;
    printf("Enter the weight in grams:");
    scanf("%d", &k);
    int kg=k/1000;
    int g=k%1000;
    printf("%d KG %d grams",kg,g);
    return 0;
}