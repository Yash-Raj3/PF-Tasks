#include<stdio.h>
int main(){
    int Marks;
    printf("Enter Your Marks :");
    scanf("%d",&Marks);
    if(Marks>=51 && Marks<=53){
        printf("You  got 1.00-GPA with D-grade");
    }else if (Marks>=54 && Marks<=57){
        printf("You got 1.33 GPA and D+ grade");

    }else if(Marks>=58 && Marks<=61){
        printf("You got 1.67 GPA and C- grade ");

    }else if (Marks>=62 && Marks<=65){
        printf("You got 2.00 GPA and C grade ");

    }else if (Marks>=66 && Marks<=69){
        printf("You got 2.33 GPA and C+ grade");
    }else if (Marks>= 70 && Marks<=73){
        printf("You got 2.67 GPA and B- grade ");

    }else if (Marks>=74 && Marks<=77){
        printf("You got 3.00 GPA and B grade");

    }else if (Marks>=78 && Marks<=81){
        printf("you  got 3.33 GPA and B+ grade ");
    }else if (Marks>=82 && Marks<=85){
        printf("You got 3.67 GPA and A- grade");

    }else if (Marks>= 86 && Marks<=90){
        printf("You got 4.00 GPA and A grade ");

    }else{
        printf("You got 4.00 GPA and A+ grade");
    }
    return 0;
}