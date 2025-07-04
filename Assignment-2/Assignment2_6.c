#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter how many times you want to repeat the loop : ");
	scanf("%d",&num);
	printf("\n");
	printf("Using for Loop \n");
	
	for(i=1;i<=num;i++)
	{
		printf("Number is : %d \n",i);
	}
	printf("\n\n");
	
	int j=1;
	printf("Using while loop \n");
	while(j<=num)
	{
		printf("Number is : %d \n",j);
		j++;
	}
	printf("\n \n");

	int k=1;
	printf("Using do while loop \n");	
	do
	{
		printf("Number is : %d \n",k);
		k++;	
	}while(k<=num);	
}
