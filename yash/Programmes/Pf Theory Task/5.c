#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter A,B and C of Quadratic EQ:  ");
    scanf("%d,%d,%d",&a,&b,&c);
    if((pow(b,2)-4*a*c)==0){
        printf("This Eq has Only one Real root");
    }else if ((pow(b,2)-4*a*c)>0){
        printf("This EQ has Two real Roots");
    }else if ((pow(b,2)-4*a*c)<0){
        printf("This EQ has Imaginary Roots");
    }
return 0;

}