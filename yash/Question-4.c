#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter First  number(1-13):");
    scanf("%d",&a);
    printf("Enter Second Number(1-13):");
    scanf("%d",&b);
     printf("Enter Third Number(1-13):");
    scanf("%d",&c);
     printf("Enter Forth Number(1-13):");
    scanf("%d",&d);
     printf("Enter Fifth Number(1-13):");
    scanf("%d",&e);
       
      if ((a==b && b==c && d==e && d!=a)||
          (a==b && b==d && c==e && c!=a)||
          (a==b && b==e && c==d && c!=a)||
          (a==c && c==d && b==e && b!=a)||
          (a==c && c==e && d==e && d!=a)||
          (a==d && d==e && b==c && b!=a)||
          (b==c && c==d && a==e && a!=b)||
          (b==c && c==e && a==d && a!=b)||
          (b==d && d==e && a==c && a!=b)||
          (c==d && d==e && a==b && a!=c)){
        printf("The House is full!!");
          }else{
        printf("The House is not full");
       }
       return 0;

}