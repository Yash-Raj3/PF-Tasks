#include<stdio.h>
int main(){
    int Sidea,Sideb,Sidec;
    printf("Enter three sides of triangle:");
    scanf("%d,%d,%d",&Sidea,&Sideb,&Sidec);
    if (Sidea==Sideb && Sideb==Sidec){
        printf("It is A equilateral Triangle ");
    }else if ((Sidea==Sideb && Sidec!=Sidea)|| (Sidea==Sidec && Sideb!=Sidea)||(Sideb==Sidec && Sidea!=Sideb)){
        printf("it is Isosceles Triangle ");
    }else{
        printf("It is scalene");
    }
return 0;
}