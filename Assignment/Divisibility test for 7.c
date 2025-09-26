#include <stdio.h>

int main() {
    long long num, temp, lastDigit, rest;
    
    printf("Enter a number: ");
    scanf("%lld", &num);

    temp = num; 

    while (temp > 7 || temp < -7) {
        lastDigit = temp % 10;        
        rest = temp / 10;              
        temp = rest - 2 * lastDigit;  
    }

    if (temp == 0 || temp == 7 || temp == -7) {
        printf("%lld is divisible by 7.\n", num);
    } else {
        printf("%lld is NOT divisible by 7.\n", num);
    }

    return 0;
}
