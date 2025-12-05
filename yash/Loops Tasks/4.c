#include<stdio.h>
int main(){
int n,base=1,bin=0;
 while(n>100||n<0){printf("Enter a number(1-100):");
scanf("%d",&n);}

int original = n;
while(n!=0){
    int r = n%2;
    bin += (r*base);
    base *= 10;
    n=n/2;
    
}
printf("Binary of given Number %d is %d",original,bin);
return 0;



}