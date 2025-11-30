#include<stdio.h>
typedef struct shop{
	char name[30];
	float price;
	int quantity;
}item;
void  get_info(item inventory[],int size,char category[] ){
	for(int i=0;i<size;i++){
		if(strcmpi(catrgory,"Cheap")==0 && inventory[i].price<20){
			
		}
	}
}
void generate_bill(item inventory[],int price){
	
	
}
int main(){
	
	item inventory[8] = {
        {"Pen", 5.0, 10},
        {"Notebook", 15.0, 5},
        {"Headphones", 50.0, 2},
        {"Backpack", 80.0, 3},
        {"Shoes", 120.0, 4},
        {"Jacket", 150.0, 2},
        {"Sunglasses", 25.0, 6},
        {"Watch", 200.0, 1}
    };

	
	
}
