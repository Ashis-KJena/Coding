/*Store marks of a student of a class in a subject
 and Display the marks of the student which are
 greater than the average.*/
 #include<stdio.h>
 #include<stdlib.h>
int main(){
    int n,i,s=0;
    float avg;
    printf("Enter number of students:");
    scanf("%d",&n);
    int a[n];
    printf("Enter marks:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    avg=(float)s/n;
    printf("Average = %.2f\n",avg);
    printf("Marks greater than average:");
    for(i=0;i<n;i++){
        if(a[i]>avg)
            printf("%d ",a[i]);
    }
    return 0;
}