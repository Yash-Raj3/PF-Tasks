// Q4 (Modified): Team Record Management System – Without File Handling

// You are required to implement the functionalities of a Team record management system for a number of players,
// each with the following attributes:

// Team ID (integer)
// Name (string, max length 50)
// Total wins (int)
// Total losses (int)

// Your program should implement the following functions:

// Add a New Team: Add a new team record to the array of structures.
// Update a Team's Record: Update an existing team's new match played by searching with the team ID and increment either
//  wins or losses by 1.
// Read the Team's Record: Read and print all the teams with the highest wins and the team with the
//  highest win percentage (wins / total matches) where total matches = wins + losses.
// Create a menu-driven program that allows the user to:

// Add a new team
// Update a team's record
// Print the data

// Note: Use an array of structures, switch statements, and functions. You are not allowed to use global variables.
#include<stdio.h>
#include<string.h>
#define MAX_TEAM_SIZE 50

typedef struct Teams{
int TeamID;
char TeamName[50];
int wins;
int lost;
} t;
void add(t T[],int *teamcount){
    
    if(*teamcount > MAX_TEAM_SIZE){
        printf("You Can not Another Team!\n");
        return;
    }
    printf("Enter Team Id: ");
    scanf("%d",&T[*teamcount].TeamID);
    printf("Enter Team Name: ");
    scanf(" %[^\n]",T[*teamcount].TeamName);
    T[*teamcount].wins=0;
    T[*teamcount].lost=0;
    (*teamcount)++;
    printf("Team %s Added Successful!\n",T[*teamcount-1].TeamName);
    printf("=================================\n");
}
void Update(t T[],int teamcount){
int id;
int choice;
int found = 0;
if(teamcount == 0){
    printf("No Teams Found");
    return;
}
printf("Enter Team ID to Update: ");
scanf("%d",&id);
for(int i=0;i<teamcount;i++){
if(T[i].TeamID == id ){
    printf("1.Win\n2.Loss\nEnter Choice: ");
    scanf("%d",&choice);
    if (choice == 1){
        T[i].wins++;
        printf("Team %s Has Won %d Matches and Lost %d Matches\n",T[i].TeamName,T[i].wins,T[i].lost);
    }
    if (choice == 2){
        T[i].lost++;
        printf("Team %s Has Won %d Matches and Lost %d Matches\n",T[i].TeamName,T[i].wins,T[i].lost);
    }
    found= 1;
    break;
}
}
if(found ==0 ){
    printf("Team Not Found!\n");
}
}
void read(t T[],int teamcount){

    for(int i=0;i<teamcount;i++){
            int maxwin = 0;
    float maxpercent =0.0;
        if(T[i].wins>maxwin){
            maxwin = T[i].wins;
        }

        int total_matches = T[i].lost+T[i].wins;
        int tpercent = (T[i].wins/total_matches)*100;
        if(tpercent>maxpercent){
            maxpercent = tpercent;
        }
        printf("Team: %s With Total Win: %d And Total WinPercent: %.2f\n",T[i].TeamName,maxwin,maxpercent);
    }




}
int main(){
t T[MAX_TEAM_SIZE];
int choice=0;
int teamcount=0;
 while(choice != 4){
printf("1.Add New Team\n2.Update Team Record\n3.Print The Data\n4.Exit the Program\nEnter Your Choice: ");
scanf("%d",&choice);
switch(choice){
    case 1:add(T,&teamcount);
    break;
    case 2:Update(T,teamcount);
    break;
    case 3:read(T,teamcount);
}
 }


}