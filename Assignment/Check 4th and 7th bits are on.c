#include <stdio.h>

int main() {
    unsigned char num;

    printf("Enter an 8-bit number (0-255): ");
    scanf("%hhu", &num);

    printf("Original number: %u\n", num);

    if (num & 8) {                
        printf("4th bit is ON ? turning it OFF.\n");
        num = num & ~8;            
    } else {
        printf("4th bit is already OFF.\n");
    }

    if (num & 64) {              
        printf("7th bit is ON ? turning it OFF.\n");
        num = num & ~64;           
    } else {
        printf("7th bit is already OFF.\n");
    }

    printf("Updated number: %u\n", num);

    return 0;
}
