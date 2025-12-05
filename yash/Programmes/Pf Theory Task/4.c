#include<stdio.h>
int main(){
    int angle1,angle2,angle3;
    printf("Enter All three angles of triangle");
    scanf("%d,%d,%d",&angle1,&angle2,&angle3);
    if(angle1+angle2+angle3==180){
        printf("It is a Triangle");

    }else{
        printf("Not a Triangle"); 
}
}