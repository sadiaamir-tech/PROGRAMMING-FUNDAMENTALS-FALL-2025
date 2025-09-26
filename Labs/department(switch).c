#include<stdio.h>
int main()
{
	int department,subdepartment;
	printf("Select your department:\n");
	printf("Enter 1 for CS\n");
	printf("Enter 2 for electrical enginnering\n");
	scanf("%d",&department);
	switch(department)
	{
	case 1:
	{	
		printf("You have selected CS\n"); 
		printf("Choose your specialization:\n");
		printf("Enter 1 for AI\n");
		printf("Enter 2 for Datascience\n");
		printf("Enter 3 for cyber\n");
		printf("Enter 4 for gaming\n");
		scanf("%d",&subdepartment); 
		switch(subdepartment)
		{
			case 1: printf("You have chosen AI\n"); break;
				case 2: printf("You have chosen Datascience\n"); break;
					case 3: printf("You have chosen cyber\n"); break;
						case 4: printf("You have chosen gaming\n"); break;
						  default: printf("Invalid input\n"); break;
		}}
		break;
		case 2: printf("\nyou have selected  electrical enginnering "); break;
		
		default: printf("invalid input");
	}
return 0;
	}
		


