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
	int orr = row - 2;
	int oc = N -2;
	int **maxb = (int**)malloc(orr*sizeof(int*));
	for(int i=0;i<orr ;i++){
		maxb[i]=(int*)malloc(oc*sizeof(int));
	}
	for(int i=0;i<orr;i++){
		for(int j=0;j<oc;j++){
			int max = *(*(pol+i)+j);
			for (int r=0;r<3;r++){
				for(int c=0;c<3;c++){
					int val = *(*(pol+i+r)+j+c);
					if(val > max){
						max = val;
					}
				}
			}
			*(*(maxb + i) + j) = max;
		}
	}
	for(int i =0;i<row;i++){
		for(int j=0;j<N;j++){
		printf("%d ",*(*(pol+i)+j));
		}
		printf("\n");
	}
for(int i=0;i<orr;i++){
	for(int j=0;j<oc;j++){
		printf("%d ",*(*(maxb + i) + j));
	}
	printf("\n");
}
	for(int i=0;i<row;i++){
		free(pol[i]);
		
	}
	free(pol);
	
}
