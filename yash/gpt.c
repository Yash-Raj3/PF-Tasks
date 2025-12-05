#include<stdio.h>
int main(){
    int a,b;
    printf("Enter   number :");
    scanf("%d",&a);
    printf("ENter another number");
    scanf("%d",&b);
  
    if (a^b==0){
        printf("The Numbers are equal");

    }else{
        printf("Numbers are not equal");
    }
    return 0;
}