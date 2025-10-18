#include<stdio.h>
int main(){
int i,j,k,n;
printf("How many lines do you want? ");
scanf("%d",&n);
// Right angle triangles.
/*for(i=0;i<n;i++){
for (j=n-i;j>=0;j--){
    printsize_tf(" ");
}for(k=0;k<=i;k++){
    printf("*");
}
printf("\n");

}*/
/*for (i=0;i<n;i++){
for  (j=0;j<=i;j++){
    printf("*");
}
printf("\n");
}*/
/* for(i=0;i<n;i++){
    for(j=i;j>0;j--){
        printf(" ");
    }
    for(k=n-i;k>0;k--){
        printf("*");
    }
    printf("\n");
 }*/
/*for(i=0;i<n;i++){
for(j=n-i;j>0;j--){
    printf("*");
}
for (k=i;k>0;k--){
    printf(" ");
}
printf("\n");
}*/
// isosceles triangle
/*for(i=0;i<n;i++){
    for(j=0;j<n-i;j++){
        printf(" ");
    }
    for(k=1;k<=2*i-1;k++){
        printf("*");
    }
    printf("\n");
}*/
 /*for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
        printf(" ");
    }
    for(k=1;k<=i;k++){
        printf("* ");
    }
    printf("\n");
 }*/
/*for(i=n;i>=1;i--){//  
    for(j=0;j<=n-i;j++){
        printf(" ");
    }
    for(k=1;k<=2*i-1;k++){
        printf("*");
    }
    printf("\n");
}*/
 //Diamond Structure 
 // upper body
 /*for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
        printf(" ");
    }
    for(k=1;k<=2*i-1;k++){
        printf("*");
    }
    printf("\n");
}
    // lower Body
    for(i=n-1;i>=1;i--){//  
    for(j=1;j<=n-i;j++){
        printf(" ");
    }
    for(k=1;k<=2*i-1;k++){
        printf("*");
    }
    printf("\n");
}*/
// side isosceles triangle 
/*for(i=1;i<=n;i++){
for(j=1;j<=i;j++){
    printf("*");
}
printf("\n");
}
for(i=n-1;i>=1;i--){
    for(j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
}*/
// diamond with line numbers
int num=1;
for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
        printf(" ");
    }
    for(k=1;k<=2*i-1;k++){
        printf("%d",num);
    }
    num++;
    printf("\n");
}
for(i=n-1;i>=1;i--){  
    for(j=1;j<=n-i;j++){
        printf(" ");
    }
    for(k=1;k<=2*i-1;k++){
        printf("%d",num);
    }
    num++;
    printf("\n");
}
return 0;

}