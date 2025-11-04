#include <stdio.h>

int main() {
    // Sample 5x5 input matrix
    int input[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    // Sample 3x3 filter matrix (all ones)
    int filter[3][3] = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
    };
int result[10][10];
    // Result matrix to store convolution output
    
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        int sum =0;
        for(int f1=0;f1<3;f1++){
            for(int f2=0;f2<3;f2++){
                sum += input[i+f1][j+f2] *filter[f1][f2];
            }
        }
        result[i][j] = sum;
    }
}
    

    // Print the result matrix
    printf("Result of convolution:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}