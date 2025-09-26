#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the 1st side of tri");
	scanf("%d",&a);
	printf("Enter the 2nd side of tri");
	scanf("%d",&b);
	printf("Enter the 3rd side of tri");
	scanf("%d",&c);
	if((a+b>c)&&(a+c>b)&&(b+c>a))
	{
		if(a==b && b==c)
		printf("It is an Equilateral Triangle\n");
		else if(a==b || b==c || a==c)
		printf("It is an Isosceles Triangle\n");
		else
		printf("It is a Scalene Triangle\n");
	}
	else 
	{
		printf("The given sides do not form a valid triangle\n");
	}
	return 0;
}
