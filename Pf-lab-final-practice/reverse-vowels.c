#include<stdio.h>
#include<string.h>

int check(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        return 1;
    }
    return 0;
}
void reversevowels(char input[]){
int left = 0;
int right = strlen(input)-1;
int i =0;
while (left < right){
   while(left < right && !check(input[right])){
    right--;
   }
   while(left<right && !check(input[left])){
    left++;
   }
   if(left<right){
    char temp = input[right];
    input[right] = input[left];
    input[left]= temp;
   }
   right--;
   left++;
}


}



int main(){
char input[50];
printf("Enter String: ");
scanf(" %[^\n]",input);
reversevowels(input);
printf("%s",input);


}