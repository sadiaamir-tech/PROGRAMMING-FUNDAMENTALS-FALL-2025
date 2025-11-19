#include <stdio.h>

int main() {
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    printf("Enter the matrix elements:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    int found = 0;

    for(int i = 0; i < r; i++) {
        // Find the maximum element in row i
        int rowMax = a[i][0];
        int colIndex = 0;
        for(int j = 1; j < c; j++) {
            if(a[i][j] > rowMax) {
                rowMax = a[i][j];
                colIndex = j;
            }
        }

        // Check if this element is the minimum in its column
        int isSaddle = 1;
        for(int k = 0; k < r; k++) {
            if(a[k][colIndex] < rowMax) {
                isSaddle = 0;
                break;
            }
        }

        if(isSaddle) {
            printf("Saddle point: %d\n", rowMax);
            found = 1;
        }
    }

    if(!found)
        printf("No saddle point found.\n");

    return 0;
}

