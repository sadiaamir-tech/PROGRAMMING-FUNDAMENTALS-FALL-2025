#include<stdio.h>
int main()
{
	int size,count=0,i;
	printf("\nEnter the size:  ");
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		count++;
	}
	printf("\nThe number of even numbers in the array is: %d",count);
	
}
