#include<stdio.h>

void GetArray(int row, int col, int matrix[row][col])
{
	//printf("Enter elements in the matrix [%d] x [%d]",row,col);
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

void DisplayMatrix(int row, int col, int matrix[row][col])
{
	int i,j;
	//printf("Enter elements of array [%d][%d]",i,j);
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
	
	printf("Enter rows and cols for Array 1 : ");
	scanf("%d %d",&a,&b);
	
	printf("Enter cols for Array 2 :(Rows of Array 2 is %d)",b);
	scanf("%d",&c);
	
	int arr_1[a][b];
	int arr_2[b][c];
	int ans[a][c];
	
	//Getting Data in the both the arrays
	GetArray(a, b, arr_1);
    GetArray(b, c, arr_2);

    // Performing Matrix Multiplication
    multi_Matrix(a, b, c, arr_1, arr_2, ans);

	printf("\n \n \t \t \t Matrix Multiplication \n \n");

    // Displaying all the Arrays
    printf("\n ------------- Matrix : 1 ------------- \n");
    DisplayMatrix(a, b, arr_1);

    printf("\n -------------Matrix : 2 ------------- \n");
    DisplayMatrix(b, c, arr_2);

    printf("\n------------- Result : Multiplication Matrix -------------\n");
    DisplayMatrix(a, c, ans);

	return 0;
}





