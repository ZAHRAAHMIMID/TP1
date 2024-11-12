#include <stdio.h>
int main(){
	int matrix[5][5];
    int i,j,k,n;
{
    for (int i = 0;i<n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}
    printf("donne k taille de matrice: ");
    scanf("%d", &n);
    printf("donne les elemment de matrice:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("la novale matrice est:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
