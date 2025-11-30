// Q2: Create a C program that manages a structure dynamically. Use the same structure as question
// 4, however, the variable should be allocated Dynamically using Calloc, Give the user the option to
// set the size in the beginning and resizing as well depending upon the number of insertions.
#include<stdio.h>
#include<stdlib.h>

typedef struct Teams{
int TeamID;
char TeamName[50];
int wins;
int lost;
} t;
void add(t **T,int *teamcount, int *size){
    
    if(*teamcount == *size){
        *size *= 2;
        *T = realloc(*T,(*size)*sizeof(t));
        if (*T == NULL) {
            printf("Memory Reallocation Failed!\n");
            exit(1);
        }
        printf("Memory Resized! New Size = %d\n", *size);
    }
    
    printf("Enter Team Id: ");
    scanf("%d",&(*T)[*teamcount].TeamID);
    printf("Enter Team Name: ");
    scanf(" %[^\n]",(*T)[*teamcount].TeamName);
    (*T)[*teamcount].wins=0;
    (*T)[*teamcount].lost=0;
    (*teamcount)++;
    printf("Team %s Added Successful!\n",(*T)[*teamcount-1].TeamName);
    printf("=================================\n");
}
void update(t *T,int teamcount){
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
void read(t *T,int teamcount){

    for(int i=0;i<teamcount;i++){
            int maxwin = 0;
    float maxpercent =0.0;
        if(T[i].wins>maxwin){
            maxwin = T[i].wins;
        }
        
        int total_matches = T[i].lost+T[i].wins;
        float tpercent = ((float)T[i].wins / total_matches) * 100;
        
        if(tpercent>maxpercent){
            maxpercent = tpercent;
        }
       printf("Team: %s | Wins: %d | Loss: %d | Win%%: %.2f\n",T[i].TeamName, T[i].wins, T[i].lost, maxpercent);
    }




}

int main(){
t *T;
int size;
int teamcount =0;

printf("Enter Size of Team: ");
scanf("%d",&size);
 T = calloc(size,sizeof(t));
   if (T == NULL) {
        printf("Memory Allocation Failed!\n");
        return 1;
    }
    int choice;
    while (1) {
        printf("1. Add Team\n2. Update Team\n3. Print Teams\n4.Free Memory\n5. Exit\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add(&T, &teamcount, &size);
                break;
            case 2:
                update(T, teamcount);
                break;
            case 3:
                read(T, teamcount);
                break;
            case 4:
                free(T);
                return 0;
                break;
            case 5:printf("Exiting...");
            return 0;
            break;
            default:
                printf("Invalid Choice!\n");
        }
    }
}



