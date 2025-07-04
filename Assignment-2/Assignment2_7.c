#include<stdio.h>
int main()
{
	int i,num;
	printf("Enter numbers you want to display : ");
	scanf("%d",&num);
	
	printf("\n");
	for(i=1;i<=num;i++)
	{
		if(i== 3)
		{
			//printf("Numbers are : %d",i);
			continue;
		}
		if(i==5)
		{
		//	printf("Number are : %d \n",i);
			break;
		}
		printf("Number are : %d \n",i);
	}
}
