/*WAP to store the salary employees of an organization and update the salary of
the employees by giving 20% bonus. (Display the original as well as updated salary)*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n;
    printf("Enter number of employees:");
    scanf("%d", &n);
    float a[n],b[n];
    printf("Enter salary of employees:");
    for(i=0;i<n;i++){
        scanf("%f", &a[i]);
    }
    for(i=0;i<n;i++){
        b[i]=a[i]+(a[i]*0.2);
    }
    printf("old saraies:");
    for(i=0;i<n;i++){
        printf("%.2f ", a[i]);
    }
    printf("\nNew salaries:");
    for(i=0;i<n;i++){
        printf("%.2f ", b[i]);
    }
    return 0;
}