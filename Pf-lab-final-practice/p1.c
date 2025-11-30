#include<stdio.h>
char *returncon(char *dest,char *src){
if(*dest != '\0'){
    returncon(dest+1,src);
    return dest;
}
*dest = *src;
*(dest +1)='\0';
if(*src == '\0'){
    return dest;
}
return returncon(dest+1,src+1);
return dest;



}
int main(){
char dest[50];
char src[50];
printf("Enter first string: ");
scanf(" %[^\n]",dest);
printf("Enter second string: ");
scanf(" %[^\n]",src);
printf("%s",returncon(dest,src));

}