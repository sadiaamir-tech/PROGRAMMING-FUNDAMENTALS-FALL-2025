#include<stdio.h>
int main()
{
    int x, fact=1;
    scanf("%d", &x);  
    for(int i=1;i<=x;i++){
	
    	fact=fact*i;
		}
	 printf("%d",fact);
    return 0;
}

