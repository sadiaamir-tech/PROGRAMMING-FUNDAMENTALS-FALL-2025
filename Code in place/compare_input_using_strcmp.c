#include <stdio.h>
#include <string.h>
int main() {
    char str1[50];
    char str2[50];
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);
    if (strcmp(str1, str2) == 0)
    {
	printf("Equal");
    } 
    else
    {
    printf("Not Equal");
	}
return 0;
}

