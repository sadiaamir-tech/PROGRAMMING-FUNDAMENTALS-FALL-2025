#include<stdio.h>
int main()
{
    int x, reverse;
    scanf("%d", &x);  
    while(x!=0){
    	reverse=x%10;
    	printf("%d",reverse);
    	x=x/10;
	}
    return 0;
}

