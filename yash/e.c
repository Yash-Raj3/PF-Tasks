#include<stdio.h>
#include<stdbool.h>
int main(){
int n;
bool isprime=0;
printf("Enter a number :");
scanf("%d",&n);
for (int i=2;i<n;i++){
     
    if(n%i == 0){
        printf("not a prime");
  
      return 0;
    }  
}
    
    printf("Is prime");    

return 0;}