#include<stdio.h>
void swap(int *a,int *b);
int main()
{
	int x=10,y=20;
	printf("\nx=%d\ny=%d",x,y);
	swap(&x,&y);
	printf("\nx=%d\ny=%d",x,y);
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a; 
	*a=*b;   
	*b=temp;
}

