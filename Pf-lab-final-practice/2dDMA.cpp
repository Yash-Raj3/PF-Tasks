#include<stdio.h>
#include<stdlib.h>
int main(){

	int row,col;
	printf("Enter Rows and Col: ");
	scanf("%d %d",&row,&col);

	int **arr = (int**)malloc(row*sizeof(int*));
for(int i=0;i<row;i++){
	arr[i]= (int*)malloc(col*sizeof(int));
}
for(int i=0;i<row;i++){
	for(int j=0;j<col;j++){
		printf("Enter Element %d,%d: ",i,j);
		
		scanf("%d",&arr[i][j]);
		
	}
	
}
	for(int i=0;i<row;i++){
	for(int j=0;j<col;j++){
		printf("%d ",arr[i][j]);
	
		
	}
	printf("\n");
}
for(int i=0;i<row;i++){
	free(arr[i]);
}
	free(arr);
	
	
}
