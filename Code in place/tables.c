#include <stdio.h>

int main() {
    int i = 1;  
    while (i <= 5) {
    printf("Table of %d:\n", i);
           int j = 1,multi; 
        while (j <= 10) {
        	multi=i*j;
            printf("%d x %d = %d\n", i, j,multi);
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}

