#include<stdio.h>

int cube(int x);
int main()
{
	int num;
	printf("\nEnter the number:  ");
	scanf("%d",&num);
	printf("The cube is: %d",cube(num));	
}
int cube(int x)
{
	return x*x*x;
}
