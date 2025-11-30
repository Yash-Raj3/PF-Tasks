// 3. Recursive Savings Plan

// Scenario: You deposit a fixed amount into a bank every month, which earns interest monthly.
// Task: Create a recursive function savingsPlan(months, deposit, interestRate) that prints the 
// balance each month and returns the final amount.

// Concepts: Tracks cumulative savings recursively; base case is 0 months.
#include<stdio.h>
void savingPlan(int months,float Deposit,float IR,int Currmonth){
	if(months==0){
		return;
	}
	float newbalance = Deposit + ((Deposit*IR)/100);
	printf("Month:%d Amount:%.2f\n",Currmonth,newbalance);
	savingPlan(months-1,newbalance,IR,Currmonth+1);
	
}
int main(){
	int m;
	float deposit;
	float IR;
	printf("Enter Number of Months: ");
	scanf("%d",&m);
	printf("Enter Deposited Amount: ");
	scanf("%f",&deposit);
	printf("Enter Interest Rate: ");
	scanf("%f",&IR);
	savingPlan(m,deposit,IR,1 );
	
	
	
}
