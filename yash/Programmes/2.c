#include<stdio.h>
int main(){
int n;

do{
    printf("Enter a number :");
scanf("%d",&n);
printf("%d\n",n);
if(n % 2 != 0){
    printf("it is odd");
    break;

}

}while(1);
    

return 0;
}
