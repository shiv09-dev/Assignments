#include<stdio.h>
int main()
{
	int choice,number1;
//	printf("Enter number 1 to display the month : ");
//	scanf("%d",&number1);
		
	do
	{	
		
		printf("Please enter your choice : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: printf("Month is Janauary \n ");
					break;
					
			case 2: printf("Month is Februaury \n");
					break;
					
			case 3: printf("Month is March \n");
					break;
					
			case 4: printf("Month is April \n");
					break;
					
			case 5: 
					printf("Month is May \n");
					break;
			case 6: 
					printf("Month is June \n");
					break;
			case 7: 
					printf("Month is July \n");
					break;		
			case 8: 
					printf("Month is August \n");
					break;
					
			case 9: 
					printf("Month is September \n");
					break;
					
			case 10: 
					printf("Month is October \n");
					break;
					
			case 11: 
					printf("Month is November \n");
					break;
			
			case 12: 
					printf("Month is December \n");
					break;
																
			default:
					printf("Invalid choice \n");
					break;
		}
		//printf("Answer is : %d \n",answer);
	}while(choice!=12);	
}
