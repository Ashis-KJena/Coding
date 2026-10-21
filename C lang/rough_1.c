#include<stdio.h>
#include<stdlib.h>
int main() {
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    printf("You have entered your age as:%d\n",age);
    if (age>=18) {
        printf("You can vote for general elections.");
    }
    else if (age>=10) {
        printf("You can vote for your school elections");

    }
    else if (age>=7){
    printf("You can vote for your local playgroup of kids");
    }
    else {
        printf("You cannot vote");

    }
}