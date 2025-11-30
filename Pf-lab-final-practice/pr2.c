// Q3: Write a C program that calculates the sum of the elements along the border of a given square
// matrix of size nxn where n is an odd number.
// The program should:
// -Take an input from the user to create a 2D array/matrix.
// Calculate the sum of the elements along the border (including corners).
// - Display the calculated sum to the user.
// Expected Input: (as a 2D matrix) 
// 123
// 456
// 789
// (1+2+3)+(1+4+7)+(7+8+9) + (3+6+9).
// Expected Output: Sum: 60
#include<stdio.h>
int main(){
int n,m;
printf("Enter rows and Columns (Square Also n and m Should be odd): ");
scanf("%d %d",&n,&m);
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
printf("Enter Element %d,%d: ",i,j);
scanf("%d",&arr[i][j]);
    }
}
int sum =0;
for (int i=0;i<n;i++){
    sum += arr[0][i];
}
for (int i=0;i<n;i++){
    sum += arr[n-1][i];
}
for (int i=0;i<n;i++){
    sum += arr[i][0];
}
for (int i=0;i<n;i++){
    sum += arr[i][n-1];
}
printf("%d",sum);

}