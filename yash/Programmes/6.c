#include<stdio.h>
int main(){
int n;
int fact=1;
printf("Enter a specific no: ");scanf("%d",&n);
for(int i=1;i<=n;i++){
    fact *= i;

    
   
}
  printf("%d",fact);
return 0;
}