#include<stdio.h>
int main()
{
    int x,sum=0,last ;
        	scanf("%d",&x);
	 do{
			last=x%10;
			sum=sum+last;
			x=x/10;
			
		}	while(x!=0);
		printf("%d",sum);
    
    return 0;
}

