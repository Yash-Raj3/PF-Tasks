// 9. Pollution Monitoring

// Scenario: A pollution control board records pollution levels at N stations daily.

// Input rows until -1.

// Create a matrix showing maximum pollution in each 3x3 block.

// Focus: 2D DMA, pointer arithmetic, nested loops, using max instead of sum.
#include<stdio.h>
#include<stdlib.h>
int main(){
	int N;
	printf("Enter Number Of Stations(N): ");
	scanf("%d",&N);
	int **pol =NULL;
	int row =0;
	int stop =0;
	while(1){
		int f;
		printf("Enter Day %d Pollution or -1 to exit: ",row+1);
	scanf("%d",&f);
	if(f==-1){
		break;
	}
		pol = (int**)realloc(pol,(row+1)*sizeof(int*));
		*(pol+row)= malloc(N*sizeof(int));
		*(*(pol+row)+0)=f;
		for(int i=1;i<N;i++){
			scanf("%d",(*(pol+row)+i));
		}	
		row++;	
	}
	int max = *(*(pol+0)+0);
	for(int i =0;i<row;i++){
		for(int j=0;j<N;j++){
			if(*(*(pol+i)+j)>max){
			max = *(*(pol+i)+j);
			}
		}
	}
	for(int i =0;i<row;i++){
		for(int j=0;j<N;j++){
		printf("%d ",*(*(pol+i)+j));
		}
		printf("\n");
	}
	printf("\nMax is %d",max);
	for(int i=0;i<row;i++){
		free(pol[i]);
		
	}
	free(pol);
	
}
