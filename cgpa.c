#include<stdio.h>
#include<string.h>
int main(){
char word[] = "computer";
char guess[6][20];
for(int i=0;i<6;i++){
printf("Enter (5-letter) Guess %d: ",i+1);
scanf("%s",guess[i]);
int count =0;
if(strlen(word) != strlen(guess[i])){
    printf("Length not correct! \n");
    continue;
}
for(int j=0;j<sizeof(word)-1;j++){
    if(guess[i][j]==word[j]){
        printf("Character (%c) is correct\n",word[j]);
        count++;
    }else{
        int found =0;
        for(int k=0;k<sizeof(word);k++){
            if(guess[i][j]==word[k]){
                found =1;
                break;
            }
        }
        if(found){
            printf("(%c) is correct but not on position\n",guess[i][j]);
        }
    }
    
}


if(count == strlen(word)){
    printf("You found It.....You won!");
    return 0;
}
if(i==5){
printf("You Lost...The word Was %s!",word);
}
}



}