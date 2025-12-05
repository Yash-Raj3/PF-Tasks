#include<stdio.h>
int main(){
    char Condition,Bed_Availability,Doctor_availability;
    printf("How is the codition of patient (Life threatening T or not Life threatening t): ");
    scanf(" %c",&Condition);
    if(Condition == 'T'){
        printf("Is there any bed Available?(Y/N): ");
        scanf(" %c",&Bed_Availability);
        if (Bed_Availability == 'Y'){
            printf("Admit Immediatly");
        }else {
            printf("Search For nearest Hospital");
        }


    }else if (Condition == 't'){
        printf("Is there any doctor available?(Y/N): ");
        scanf(" %c",&Doctor_availability);
        if (Doctor_availability == 'Y'){
            printf("Assigned For consultation");
        }else{
            printf("On waiting list");
        }
    }
    return 0;
}