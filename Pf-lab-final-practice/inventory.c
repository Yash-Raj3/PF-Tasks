// 1. Inventory Management
// Scenario: You are making a grocery store inventory system.
// The store has N types of items (columns).
// The user keeps entering rows of stock levels for each day until -1 is entered.
// Create a daily total stock array using DMA (sum of each row).
// Print the totals.
// Focus: 2D array, row sums, dynamic rows.
#include<stdio.h>
#include<stdlib.h>
int main(){
	int N;
	printf("Enter Number Of Items(Col): ");
	scanf("%d",&N);
	int **stock = NULL;
	int *dt = NULL;
	int row =0;
	int stop =0;
	while (1){
		 printf("Enter Day %d Quantity or -1 to Exit Program: ",row+1);
		 
		 int *temp = malloc(N*sizeof(int));
		 
		 for(int i=0;i<N;i++){
		 	scanf("%d",&temp[i]);
		 	if(temp[i]==-1){
		 		stop =1;
		 		break;
			 }
		 }
		 if(stop){
		 	free(temp);
		 	break;
		 }
		 
		 stock = (int**)realloc(stock,(row+1)*sizeof(int*));
		 stock[row]= temp;
		 dt = (int *)realloc(dt,(row+1)*sizeof(int));
		 int sum=0;
		 for(int i=0;i<N;i++){
		 	sum += temp[i];
		 }
		 dt[row++] = sum;
	}
	for(int i=0;i<row;i++){
		printf("Day: %d Total Stock: %d\n",i+1,dt[i]);
	}
	for(int i=0;i<row;i++){
		free(stock[i]);
	}
	free(stock);
	free(dt);
}
