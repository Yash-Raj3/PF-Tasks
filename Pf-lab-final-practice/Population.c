// Scenario: A city has a population that grows by a fixed percentage each year. 
// Some people also move out each year.
// Task: Write a recursive function population(years, currentPopulation, growthRate, migration)
//  to print the population at each year and return the final population.

// Concepts: Tracks state year by year; handles growth and migration recursively.
#include<stdio.h>
void population(int years,float Cp,float gr,int mi,int CurrYear){
	if(years < 1){
		return;
	}
	 float newCp = Cp +((Cp*gr)/100);
	 newCp -= mi;
	printf("Year:%d Population:%.2f\n",CurrYear,newCp);
	population(years-1,newCp,gr,mi,CurrYear+1);
}
int main(){
	int years;
	float Cp;
	float gr;
	int mi;
	printf("Enter Number of Years: ");
	scanf("%d",&years);
		printf("Enter Growth Rate: ");
	scanf("%f",&gr);
		printf("Enter Current Population: ");
	scanf("%f",&Cp);
		printf("Enter number of of People Migrate Each Year: ");
	scanf("%d",&mi);
	population(years,Cp,gr,mi,1);
	
	
	
}
