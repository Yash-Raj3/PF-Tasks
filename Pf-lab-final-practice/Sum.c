#include<stdio.h>
#include<stdlib.h>
int main(){
	int N;
	printf("Enter Number of Columns: ");
	scanf("%d",&N);
	int **pol =NULL;
	int row =0;
	int stop =0;
	while(1){
		int f;
		printf("Enter Row %d Elements or -1 to exit: ",row+1);
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
	int **suM = (int**)malloc(orr*sizeof(int*));
	for(int i=0;i<orr ;i++){
		suM[i]=(int*)malloc(oc*sizeof(int));
	}
	for(int i=0;i<orr;i++){
		for(int j=0;j<oc;j++){
			int sum =0;
			for (int r=0;r<3;r++){
				for(int c=0;c<3;c++){
					sum += *(*(pol +i+r)+j+c);
				}
			}
			*(*(suM + i) + j) = sum;
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
		printf("%d ",*(*(suM + i) + j));
	}
	printf("\n");
}
	for(int i=0;i<row;i++){
		free(pol[i]);
		
	}
	free(pol);
	
}

