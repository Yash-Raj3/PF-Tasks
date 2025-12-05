#include<stdio.h>
int main(){
int n;
printf("Enter a specific no: ");scanf("%d",&n);
for(int i=1;i<=n;i++){
    
    if(i==2){
        continue;
    }
    printf("%d\n",i);
}
  
return 0;
}
