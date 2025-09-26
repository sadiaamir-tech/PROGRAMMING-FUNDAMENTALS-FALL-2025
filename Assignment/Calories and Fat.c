#include <stdio.h>

int main() {
    float totalCalories, fatGrams, caloriesFromFat, percentFat;
    printf("Enter total calories: ");
    scanf("%f", &totalCalories);

    printf("Enter fat grams: ");
    scanf("%f", &fatGrams);

    if (totalCalories < 0 || fatGrams < 0) {
        printf("Error: Calories and fat grams cannot be negative.\n");
        return 0;
    }

    caloriesFromFat = fatGrams * 9;

    if (caloriesFromFat > totalCalories) {
        printf("Error: Calories from fat cannot be greater than total calories.\n");
        return 0;
    }

    percentFat = (caloriesFromFat / totalCalories) * 100;

    printf("Percentage of calories from fat: %.2f%%\n", percentFat);

    if (percentFat < 30) {
        printf("This food is low in fat.\n");
    }

    return 0;
}
