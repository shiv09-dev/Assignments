#include<stdio.h>
int main()
{
	int a = 10;
	int *b;
	printf("Enter value for a : ");
	scanf("%d",&a);
	printf("\n");
	printf("Value of a before using pointer : %d",a);
	
	printf("\n");
	b = &a;
	*b = 50;
	printf("Value of a after using pointer : %d",a);
	
	
	 
}
