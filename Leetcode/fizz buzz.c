char ** fizzBuzz(int n, int* returnSize){
    *returnSize = n;
    static char result[10000][9];
    char **res = malloc(n * sizeof(char*));

    for(int i = 1; i <= n; i++){
        if(i % 15 == 0) sprintf(result[i-1], "FizzBuzz");
        else if(i % 3 == 0) sprintf(result[i-1], "Fizz");
        else if(i % 5 == 0) sprintf(result[i-1], "Buzz");
        else sprintf(result[i-1], "%d", i);

        res[i-1] = result[i-1];
    }
    return res;
}

