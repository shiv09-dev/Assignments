#include<stdio.h>
 
//We have created this Function for getting data in the Arrays from the User
void GetArray(int row, int col, int matrix[row][col])
{
	int i,j;
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<col;j++)
		{
			printf("Enter Elements [%d][%d] : ",i,j);
			scanf("%d",&matrix[i][j]);	
		}	
	}
}


//We have created this Function to Display all the Arrays 
void DisplayMatrix(int row, int col, int matrix[row][col])
{
	int i,j;
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<col;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
	}
	printf("\n \n");
}


//We have created this Function for Matrix Multiplication
void multi_Matrix(int a, int b, int c, int arr_1[a][b], int arr_2[b][c], int ans[a][c])
{
	int i,j,k;
	 for ( i = 0; i < a; i++) 
	{
        for ( j = 0; j < c; j++) 
		{
            ans[i][j] = 0;
            for (k = 0; k < b; k++) 
			{
                ans[i][j] += arr_1[i][k] * arr_2[k][j];
     	    }
     	}
	}
}


int main()
{
	int a,b,c;
	
	//Here we are getting Rows and Columns of Both Arrays
	printf("Enter rows and columns for Array 1 : ");
	scanf("%d %d",&a,&b);
	printf("Enter columns for Array 2 (Rows of Array 2 is as Array 1) : ",b);
	scanf("%d",&c);
	
	//Here we assigned Rows and Columns to all three Arrays
	int arr_1[a][b];
	int arr_2[b][c];
	int ans[a][c];
	
	
	//Getting Data in the both the arrays and Displaying both Arrays
	printf("\n \n \t \t \t Matrix Multiplication \n \n");

	printf("\n ------------- Matrix : 1 ------------- \n");	
	GetArray(a, b, arr_1);
    DisplayMatrix(a, b, arr_1);
	
	printf("\n");
	
	printf("\n -------------Matrix : 2 ------------- \n");
    GetArray(b, c, arr_2);
    DisplayMatrix(b, c, arr_2);
	
	
    // Performing Matrix Multiplication
    multi_Matrix(a, b, c, arr_1, arr_2, ans);

	
	//Displaying Final Result
    printf("\n------------- Result : Multiplication Matrix -------------\n");
    DisplayMatrix(a, c, ans);

	return 0;
}





