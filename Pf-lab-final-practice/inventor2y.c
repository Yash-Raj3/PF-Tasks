#include<stdio.h>
#include<stdlib.h>
int main(){
	int N;
	printf("Enter  Number of Items(Col): ");
	scanf("%d",&N);
	int **stock = NULL;
	int row=0;
	while(1){
		int f;
		printf("Enter items Quantity of Day %d or -1 to Exit:",row+1);
		scanf("%d",&f);
		 if(f==-1){
		 	break;
		 }
	stock = (int**)realloc(stock,(row+1)*sizeof(int*));
	stock[row]= malloc(N*sizeof(int));
	stock[row][0]=f;

		for(int j=1;j<N;j++){
			scanf("%d",&stock[row][j]);
		}
		row++;
	}
		int *dt = malloc(row*sizeof(int));
		for(int i=0;i<row;i++){
			int sum=0;
			for(int j=0;j<N;j++){
				sum += stock[i][j];
			}
			dt[i]=sum;
		}	
	
		for(int i=0;i<row;i++){
			printf("Day:%d Total Stock: %d\n",i+1,dt[i]);
	}
	for(int i=0;i<row;i++){
		free(stock[i]);
	}
		free(stock);
		free(dt);
		
	}
	
	

