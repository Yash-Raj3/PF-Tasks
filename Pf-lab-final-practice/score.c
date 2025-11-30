// 10. Recursive Game Score Tracker

// Scenario: In a game, the player earns points each level. Some levels have bonus points.
// Task: Write calculateScore(level, basePoints, bonusLevels[], bonusPoints[]) recursively to 
// print the score after each level and total score.

// Concepts: Base case is last level; recursion handles incremental score updates and conditional bonuses.
#include<stdio.h>
int calculatescore(int level,int tl,int bp , int bl[],int BP[],int bc){
	if(level >tl){
		return 0;
	}
	int score  = bp;
	for (int i=0;i<bc;i++){
		if(level == bl[i]){
			score += BP[i];
		}
	}
	printf("Level: %d and Score: %d\n",level,score);
	return score + calculatescore(level+1,tl,bp,bl,BP,bc);
}
int main(){
	int tl,bp,bc;
	printf("Enter Number of Levels: ");
	scanf("%d",&tl);
	printf("Enter Base Points Per Level: ");
	scanf("%d",&bp);
	printf("Enter Number of BonusLevels:  ");
	scanf("%d",&bc);
	int bl[bc],bP[bc];
	for(int i=0;i<bc;i++){
		printf("Enter bonus level and Bonus Point: ");
		scanf("%d %d",&bl[i],&bP[i]);
		
	}
	int totalscore= calculatescore(1,tl,bp,bl,bP,bc);
	printf("Total Score: %d",totalscore);
	
	
}
