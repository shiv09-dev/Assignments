#include<stdio.h>
int main()
{
	printf("***Arithmetic Operations*** \n \n");
	int choice,number1,number2,answer;
	printf("Enter number 1 : ");
	scanf("%d",&number1);
	printf("Enter number 2 : ");
	scanf("%d",&number2);
	
	printf("\n");
	
	do
	{
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("5. Exit\n \n");
		
		printf("Please enter your choice : ");
		scanf("%d",&choice);
		
		printf("\n");
		
		switch(choice)
		{
			case 1: answer=number1+number2;
					break;
					
			case 2: answer=number1-number2;
					break;
					
			case 3: answer=number1*number2;
					break;
					
			case 4: answer=number1/number2;
					break;
					
			case 5: 
					printf("Exiting the Program \n");
					break;
					
			default:
					printf("Invalid choice \n");
					break;
		}
		printf("Answer is : %d \n",answer);
	}while(choice!=5);	
	
	printf("\n \n");
	
	printf("***Relational and Logical Operations*** \n \n");
	int a = 10, c,d,g,k,l,h = 10,ans;
	float b = 5.2 ,e,f;
	float i = 34.5 , j = 34.5;
	
	c = a>b;
	printf("Is a greater than b ?? %d \n ",c);
	
	d = a<b;
	printf("Is a Less than than b ?? %d  \n",d);
	
	a +=15;
	printf("Value of A after increment is : %d  \n ",a);
	
	e = (a > b && b<a);
	printf("AND operation between a nd b is : %f  \n ",e);
	
	f = (a = b || b>a);
	printf("OR opertation between a nd b is : %f  \n",f);
	
	g = a != b;
	printf("Not equal operation between a and b is : %d  \n",g);
	
	k = i>=j;
	printf("Is i greater than or equal to j ??  %d \n  ",k);
	
	l = i<=j;
	printf("Is i less than or equal to j ??  %d \n  ",l);

	ans = a & h;
	printf("Bitwise  AND operation between a and b is : %d  \n",ans);

	//ans = a | h;
	printf("Bitwise OR operation between a and b is : %d",a | h);
}
