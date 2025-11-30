#include<stdio.h>
#include<stdlib.h>
int main(){
	int n=12;
	int *ptr = (int*)malloc(n*sizeof(int));
	int count =0;
	while(count<12){
		printf("Enter Element %d: ",count);
		scanf("%d",&ptr[count]);
		if(ptr[count]<0) break;
	
		count++;
	}
		int *temp = (int*)realloc(ptr,count*sizeof(int));
		if(temp!= NULL){
			ptr =temp;
		}
		
	while(count > 0){
		printf("%d ",ptr[count-1]);
		count--;
	}
	free(ptr);
}
