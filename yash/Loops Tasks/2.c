#include<stdio.h>
int main(){
    int n,Esum=0,Osum=0;
    printf("Enter The number:");
    scanf("%d",&n);
        for (int i=1;i<=n;i++ ){
     if (i%2==0){
        Esum += i;
     }else{
        Osum += i;
     }
            
    }
    printf("Sum of Even Numbers Is %d\n",Esum);
    printf("Sum of  Odd Numbers Is  %d",Osum);
    return 0;


}