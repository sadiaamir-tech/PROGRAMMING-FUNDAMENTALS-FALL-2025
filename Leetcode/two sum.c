#include <stdio.h>

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int size = 4;
    int i, j;

    for(i = 0; i < size; i++) {
        for(j = i + 1; j < size; j++) {
            if(nums[i] + nums[j] == target) {
                printf("Indices: [%d, %d]\n", i, j);
                return 0; // stop after finding the first pair
            }
        }
    }

    printf("No pair found.\n");
    return 0;
}
