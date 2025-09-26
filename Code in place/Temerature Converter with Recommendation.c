#include <stdio.h>

int main()
{
	float c,f;
	printf("\nEnter the temperature in Celsius:");
	scanf("%f",&c);
	f=(c*9.0/5.0)+32;
	printf("\n%.2fC=%.2fF",c,f);
	if(c>=30)
	printf("\nIt's hot! Stay hydrated and wear light clothes.");
	else if(c>=20)
	printf("\nNice weather! Perfect for outdoor activites.");
	else if(c>=10)
	printf("\nCool Weather! Wear a light jacket.");
	else if(c>=0)
	printf("\nCold! Wear warm clothes.");
	else
	printf("\nFreezing! Stay indoor and bundle up.");
	return 0;	
}
