#include<stdio.h>
int main(){
int Weight;
char ticket_type,passenger;
 printf("Enter the type of Ticket (B for Business, E for Economy):\n");
scanf(" %c",&ticket_type);
if(ticket_type == 'B'){
	printf("Is Passenger Frequent (F/N)");
	scanf(" %c",&passenger);
	if(passenger=='F'){
		printf("You can freely access lounge and also can carry baggage above 20kg");
	}else{
		printf("You can carry baggage above 20kg but cannot access the lounge");
	}
}else if(ticket_type == 'E'){
	printf("what is the weight of baggage :");
	scanf("%d",&Weight);
	if (Weight>20){
		printf("You have to leave some stuff here or to pay fine for this extra baggage ");
	}else {
		printf("You can go ");
	}
}else{
	printf("This Choice Doesn't exist");
}
return 0;
}