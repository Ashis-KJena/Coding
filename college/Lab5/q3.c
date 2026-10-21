#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int x1,x2,y1,y2;
    printf("Enter the coordinate X1 and Y1:");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates X2 and Y2:");
    scanf("%d %d", &x2, &y2);
   float d=sqrt(pow((y2-y1),2)+pow((x2-x1),2));
    printf("So the distance between two points is %f",d);
    return 0;
}