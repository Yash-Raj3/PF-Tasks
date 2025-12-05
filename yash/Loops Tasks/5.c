#include<stdio.h>
int main(){
    int n, bin=0,dec=0,base=1;
    printf("Enter a number in Binary :");
    scanf("%d",&n);
    while (n!=0){
 int r =n%10;
if(r!=0 && r!=1){
    bin =1;
    break;
}
  n=n/10;
    }
    if(bin == 1){
    printf("You stupid,I told you to enter a binary number");
 } else if(bin == 0){
printf("Nice!! a binary number\n");
 }

    return 0;
}