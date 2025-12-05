#include<stdio.h>
int main(){
	int d1,d2,d3,d4,d5,d6,d;
	int decimal;
	printf("Enter 6-Digit Code:");
	scanf("%d",&d);
	 
	 d6 = d%10;
	 d5 = (d/10)%10;
	 d4 =(d/100)%10;
	 d3 = (d/1000)%10;
	 d2	= (d/10000)%10;
	 d1 = (d/100000)%10;
	 decimal = d1*1+d2*2+d3*4;
	 printf("--Stock Status--\n");
	 if(decimal==0){
	 	printf("Item is Fully Stocked\n");
	 }else if(decimal==1){
	 	printf("Item is Low in stock,Restocking Required\n");
	 }else if(decimal==2){
	 	printf("Item is Out of Stock,Urgent  Restocking Required!\n");
	 	
	 }else if(decimal==7){
	 	printf("Restricted Item,Access Requires Manager's Approval\n");
	 }else{
	   printf("No stock status defined for this combination\n");	
	 }
	 printf("--Security Conditions--\n");
	 if(d4==2||d4==3||d4==5||d4==7){
	 	printf("The system restrict access to hazardous materials area unless the user has special clearance\n");
	 }
	 
	 if(d5%2==0&&d5&4==0){
	 	printf("Requires temperature-controlled storage\n");
	 } 
	 if(d6%2 != 0){
	 	printf("Imported item\n");
	 }else{
	 	printf(" Locally made item\n");
	 }
	return 0;
	
	}