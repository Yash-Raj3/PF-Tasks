#include<stdio.h>
int main(){
int n;

do{
    printf("Enter a number :");
scanf("%d",&n);
printf("%d\n",n);
if(n % 7 == 0){
    printf("it is multiple of 7");
    break;
}
}while(1);  
return 0;
}
