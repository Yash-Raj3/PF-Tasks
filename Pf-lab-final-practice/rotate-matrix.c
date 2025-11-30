#include<stdio.h>
int main(){
    int n,m;
    printf("Enter Size of Matrix(n,m): ");
    scanf("%d %d",&n,&m);
int matrix[n][m];
for(int i =0;i<n;i++){
    for(int j=0;j<m;j++){

printf("Enter Element %d %d: ",i,j);
scanf("%d",&matrix[i][j]);

    }
}
for(int i =0;i<n;i++){
    for(int j=i;j<m;j++){
    int temp = matrix[i][j];
    matrix [i][j]=matrix[j][i];
    matrix[j][i] = temp;
    }
}

for(int i =0;i<n;i++){
    for(int j=0;j<m/2;j++){
    int temp = matrix[i][j];
    matrix [i][j]=matrix[i][n-j-1];
    matrix[i][n-j-1] = temp;
    }
}
for(int i =0;i<n;i++){
    for(int j=0;j<m;j++){

printf("%d ",matrix[i][j]);

    }
    printf("\n");
}




}