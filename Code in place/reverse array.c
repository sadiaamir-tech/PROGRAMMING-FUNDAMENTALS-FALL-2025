#include<stdio.h>
int main()
{
	int size,k=1,i,temp;
	printf("\nEnter the size of the array:  ");
	scanf("%d",&size);
	int arr[size];
	printf("\nEnter the elements:  ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[size-k];
		arr[size-k]=temp;
		k++;
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}	
} 
