#include <stdio.h>

int main() {
    float cost, discount = 0.0, finalAmount, savedAmount;

    printf("Enter the total cost of shopping: ");
    scanf("%f", &cost);

    if (cost >= 2000 && cost <= 4000) {
        discount = 0.20 * cost;  
    }
    else if (cost >= 4001 && cost <= 6000) {
        discount = 0.30 * cost; 
    }
    else if (cost > 6000) {
        discount = 0.50 * cost; 
    }
    else {
        discount = 0.0;        
    }

    finalAmount = cost - discount;
    savedAmount = discount;

    printf("Actual amount: %.2f\n", cost);
    printf("Saved amount: %.2f\n", savedAmount);
    printf("Amount after discount: %.2f\n", finalAmount);

    return 0;
}
