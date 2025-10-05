#include<stdio.h>
int main()
{
	int a,b;
	char op;
	printf("\nEnter a number: ");
	scanf("%d",&a);
	printf("\nEnter another number:  ");
	scanf("%d",&b);
	printf("\nEnter the operation\nEnter + for addition\nEnter - for subtraction\nEnter * for multiplication\nEnter / for division\nEnter %% for modulus:  ");
	scanf(" %c",&op);
	switch(op)
	{
case '+':
printf("\nThe addition of %d and %d is %d",a,b,a+b); break;
case '-':
printf("\nThe subtraction of %d and %d is %d",a,b,a-b); break;
case '*':
printf("\nThe multiplication of %d and %d is %d",a,b,a*b); break;
case '/':
    {
		if(b==0)
		printf("\n Denominator can not be zero");
	else
  		printf("\nThe division of %d and %d is %f",a,b,(float)a/b);
	}
	break;
	
case '%':
	{
		if(b==0)
		printf("\n Denominator can not be zero");
	else
		printf("\nThe remainder of %d and %d is %d",a,b,a%b);
		}
		break;
		default:
			printf("\nInvalid input");
				
		
	}
	
	
}
			
	
		
		

	

