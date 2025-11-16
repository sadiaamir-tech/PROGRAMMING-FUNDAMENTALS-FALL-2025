int* replaceElements(int* arr, int size, int* returnSize){
    int maxRight = -1;

    for(int i = size - 1; i >= 0; i--){
        int temp = arr[i];
        arr[i] = maxRight;
        if(temp > maxRight) maxRight = temp;
    }

    *returnSize = size;
    return arr;
}

