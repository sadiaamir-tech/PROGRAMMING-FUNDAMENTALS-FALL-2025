#include <stdio.h>
#include <string.h>

int main() {
    char first[20] = "sadia";
    char last[] = "amir";
    strcat(first, " ");
    strcat(first, last);

    printf("Full name: %s\n", first);
    return 0;
}

