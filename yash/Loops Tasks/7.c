#include<stdio.h>
int main(){
    int n[5],rev[5],i,temp;
    printf("Enter 5 numbers");
    for(i=0;i<=4;i++){
        scanf("%d",&n[i]);
    }
printf("---With second Array Method---\n");
    for(i=0;i<=4;i++){ 
        printf("Before Reversing n[%d]=%d\t",i,n[i]);
        rev[i]=n[4-i];
        printf("After Reversing n[%d]=%d\n",i,rev[i]);
    }
    printf("----Without Second Array Method---\n");
    for(i=0;i<=4;i++){
        temp = n[i];
        n[i]=n[4-i];
        n[4-i]=temp;
printf("After Reversing n[%d]=%d\n",i,rev[i]);
    }
    return 0;


}