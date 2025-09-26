#include <stdio.h>

int main()
{
	float c,f;
	printf("\nEnter the temperature in celcius:");
	scanf("%f",&c);
	f=(c*9.0/5.0)+32;
	printf("\nThe temperature in fahrenheit is: %.2f",f);
	/* 100 celcius is equal to 212 fahrenheit
	0 celcius is equal to 32 fahrenheit
	-40 celcius is equal to -40 fahrenheit */
	return 0;
}
