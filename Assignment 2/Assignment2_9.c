#include<stdio.h>
int main()
{
	int i,j,row,col,sum;
	printf("Enter the size of the array (Rows and columns) :");
	scanf("%d %d",&row,&col);	
	int arr_1[row][col] , arr_2[row][col], ans[row][col];
		
	printf("\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter elements of array 1 [%d][%d]:",i,j);
			scanf("%d",&arr_1[i][j]);
			//scanf("%d",&arr_2[i][j]);	
		}	
	}
	printf("\n");
		
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter elements of array 2 [%d][%d]:",i,j);
			scanf("%d",&arr_2[i][j]);	
		}	
	}
					
	printf("\n");
	
	for(i=0;i<row;i++)
	{
		printf("\n");
		
		for(j=0;j<col;j++)
		{
				ans[i][j] =  arr_1[i][j] + arr_2[i][j];		
		}
	}
	
	printf("Answer is : ");
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<col;j++)
		{
			printf(" \t%d",ans[i][j]);	
		}	
	}
	//printf("Sum in array of same indexes is : %d",sum); 	
}
