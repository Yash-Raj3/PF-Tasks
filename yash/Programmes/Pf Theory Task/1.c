#include <stdio.h>
int main(){
    char alphabet;
    printf("Enter any alphabet(Capital or small) :");
    scanf(" %c",&alphabet);
    if (alphabet>='A' && alphabet<='Z'){
        printf("it lies between A & Z");
    }else if(alphabet>='a'&& alphabet<='z'){
        printf("It lies between a & z");
    }
return 0;

}