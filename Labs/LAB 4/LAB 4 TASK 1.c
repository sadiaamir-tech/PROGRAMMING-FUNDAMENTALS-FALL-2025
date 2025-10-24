#include <stdio.h>
int main() {
    int GB;
    float bill;

    printf("Enter your GB: ");
    scanf("%d", &GB);

    if (GB <= 100) {
        bill = GB * 2;
    } 
    else if (GB <= 200) {
        bill = (100 * 2) + (GB - 100) * 1.5;
    } 
    else if (GB <= 400) {
        bill = (100 * 2) + (100 * 1.5) + (GB - 200) * 1;
    } 
    else {
        bill = (100 * 2) + (100 * 1.5) + (200 * 1) + (GB - 400) * 0.5;
    }

    printf("Your bill is: %.2f\n", bill);

    return 0;
}

