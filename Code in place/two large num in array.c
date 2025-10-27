#include<stdio.h>
int main(){
    int size, i;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int num[size];
    printf("Enter %d elements: ", size);
    for(i = 0; i < size; i++)
        scanf("%d", &num[i]);

    int max1, max2;

    if(num[0] > num[1]){
        max1 = num[0];
        max2 = num[1];
    } else {
        max1 = num[1];
        max2 = num[0];
    }

    for(i = 2; i < size; i++){
        if(num[i] > max1){
            max2 = max1;
            max1 = num[i];
        }
        else if(num[i] > max2 && num[i] != max1){
            max2 = num[i];
        }
    }

    printf("First maximum = %d\n", max1);
    printf("Second maximum = %d\n", max2);

    return 0;
}

