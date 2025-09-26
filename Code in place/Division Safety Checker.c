#include <stdio.h>

int main()
{
	float nume,deno;
	printf("\nEnter the numerator:");
	scanf("%f",&nume);
	printf("\nEnter the denominator:");
	scanf("%f",&deno);
	if(deno==0)
	printf("\nError! you can't take zero as denominator");
	else
	printf("The result of division is: %.2f",nume/deno);
	return 0;
}
