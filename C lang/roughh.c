#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int m,s;
    printf("Click 1 if you passed maths, otherwise click 0.\n");
    scanf("%d", &m);
    printf("Click 1 if you passed science, otherwise click 0.\n");
    scanf("%d", &s);
    if (m==1 && s==1) {
    printf("You have been rewarded an amount of 100rs."); }
    else if (m==1 || s==1) {
    printf("You have been rewarded a sum of 50rs."); }
    
    else {
    printf("You have been failed"); }
    return 0;

}
