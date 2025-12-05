#include<stdio.h>
#include<math.h>
int main(){
    int marks[5],sum=0,i,highest=0,lowest=0;
    printf("Enter Marks Of 5 subjects(1-100): ");
    scanf("%d,%d,%d,%d,%d",&marks[0],&marks[1],&marks[2],&marks[3],&marks[4]);
for( i=0;i<=4;i++){
   sum +=  marks[i];
}
for(i=0;i<=4;i++){
    printf("Percentage of Subject %d is %d\n",i+1,marks[i]);
}
printf("Percentage of Overall Subjects is %d\n",(sum*100)/500);
for(i=0;i<=4;i++){
if(marks[i]>marks[highest]){
    highest = i;
}
}
printf("Highest Marks Are %d\n",marks[highest]);
for(i=0;i<=4;i++){
    if(marks[i]<=marks[lowest]){
     lowest = i;
     
    }
    
}
printf("Lowest marks are %d",marks[lowest]);
return 0;
}