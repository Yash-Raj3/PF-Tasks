#include<stdio.h>
int main(){
    int n[10],i,a=1,d=1,h1,h2,temp;
    int Pcount=0, Ncount=0;
    char c;
    printf("Enter 10 Numbers:");
    for(i=0;i<=9;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<9;i++){
        if(n[i+1]<n[i])a=0;
        if(n[i+1]>n[i])d=0;
    }
    if(a==1){
        printf("Ascending Sequence\n");

    }else if(d== 1){
        printf("Descending Sequence\n");
    }else{
        printf("No sequence\n");
    }
    h1=h2=n[0];
    for(i=0;i<=9;i++){
        if(n[i]>h1){
            h2 = h1;
            h1 = n[i];
        }else if(n[i]>h2 && n[i]<h1){
            h2 = n[i];
        }
    }
    printf("Greatest Number is %d\n",h1);
    printf("2nd Greatest number is %d\n",h2);
    for(i=0;i<=9;i++){
        if(n[i]>0){
            Pcount++;
        }else{
            Ncount++;
        }
    }
    if(Pcount>0){
        printf("Total Positive Numbers Are %d\n",Pcount);
    }
    if(Ncount>0){
        printf("Total Negative Numbers Are %d\n",Ncount);
    }
    printf("Enter Right Shift(R/r) or Left Shift(L/l):\n");
    scanf(" %c",&c);
    if(c=='r'||c=='R'){
        temp = n[9];
        for(i=9;i>0;i--){
            n[i]=n[i-1];
        }
        n[0]=temp;
    }else if(c=='l'||c=='L'){
        temp = n[0];
        for(i=0;i<9;i++){
            n[i]=n[i+1];
        }
        n[9]=temp;
    }else{
        printf("Invalid Choice!!");
        return 0;
    }
    printf("--After Shifting Result--\n");
    for(i=0;i<=9;i++){
    printf("%d\t",n[i]);
    }
    return 0;
}

