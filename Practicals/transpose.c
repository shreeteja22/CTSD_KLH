#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int matrix[n][n],transpose[n][n];
    for(int i = 0 ; i< n;i++){
        for(int j = 0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i = 0 ; i< n;i++){
        for(int j = 0;j<n;j++){
            transpose[j][i]=matrix[i][j];
        }
    }
    for(int i = 0 ; i< n;i++){
        for(int j = 0;j<n;j++){
            printf("%d",transpose[i][j]);
            printf("\n");
        }
    }
    return 0;
}