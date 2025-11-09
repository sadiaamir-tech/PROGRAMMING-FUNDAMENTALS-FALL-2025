#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Fibonacci = 0");
    } 
    else if (n == 1) {
        printf("Fibonacci = 1");
    } 
    else {
        for (i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Fibonacci = %d", b);
    }

    return 0;
}

