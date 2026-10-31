#include<stdio.h>
#include<stdlib.h>
int main(){
    int cd,cm,cy,bd,bm,by,pd,pm,py;
    printf("Enter your DOB in dd/mm/yyyy:");
    scanf("%d %d %d", &bd, &bm, &by);
    printf("Enter present date in dd/mm/yyy:");
    scanf("%d %d %d", &cd, &cm, &cy);
    if(cd<bd){
        cd+=30;
        cm--;
    }
    if(cm<bm){
        cm+=12;
        cy--;
    }
    pd=cd-bd;
    pm=cm-bm;
    py=cy-by;
    printf("Age by now is %d years %d months and %d days",py,pm,pd);
    return 0;
}