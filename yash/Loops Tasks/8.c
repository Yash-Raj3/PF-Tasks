#include<stdio.h>
int main(){
    int n[10],i,ascen=1,descen=1,highest,second_highest,Pcount=0,Ncount=0,temp;
    char c;
    printf("Enter 10 Numbers:");
    for(i=0;i<10;i++){
        scanf("%d",&n[i]);
    }
    for (i=0;i<10;i++){
        if(n[i+1]<n[i]){
            ascen =0;
        }if(n[i+1]>n[i]){
            descen =0;
        }
    }
    if(ascen == 1){
        printf("Your Numbers sequence is Ascending\n");
    }else if(descen == 1){
        printf("Your Numbers Sequence is Descending\n");
    }else{
        printf("There is no Sequence of Your Numbers\n");
    }
    highest = second_highest = n[0];
    for(i=0;i<10;i++){
        if(n[i]>highest){
            second_highest = highest;
            highest = n[i];
        }else if(n[i]>second_highest && n[i]<highest ){
            second_highest = n[i];
        }
    }
    printf("Highest Number is %d\n",highest);
    printf("Second Highest Number is %d\n",second_highest);
    for(i=0;i<10;i++){
        if(n[i]>0){
            Pcount++;
        }else{
            Ncount++;
        }
    }
    if(Pcount > 0){
        printf("There are %d Positive Numbers!\n",Pcount);
    }
    if(Ncount>0){
        printf("There are %d Negative Numbers!\n",Ncount);
    }
    printf("Enter a Left(L/l) or Right(R/r) Shift\n");
    scanf(" %c",&c);
    if(c =='L'||c=='l'){
     temp = n[0];
    for(i=0;i<9;i++){
        n[i]=n[i+1];
    }
    n[9]=temp;}
    else if(c=='R'|| c=='r'){
        temp = n[9];
        for(i=9;i>0;i--){
            n[i]=n[i-1];
        }
        n[0]=temp;
    }else{
        printf("Invalid Choice!!");
        return 0;}
    for(i=0;i<10;i++){
printf("After Shifting array is %d\n",n[i]);}
    return 0;

}