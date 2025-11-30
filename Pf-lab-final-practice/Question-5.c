#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
FILE *fptr;
char filename[10];
char input[100];
printf("Enter file name (with Extension):");
scanf("%[^\n]",filename);
fptr = fopen(filename,'w');



}