#include<stdio.h>
int main()
{
	FILE *assign;
	int i;
	char data[100];
	assign = fopen("Assignemnt.txt","a");
	
	printf("Enter the data you want in the file : ");
	gets(data);
	printf("\n");
	printf("Here we are creating a file and adding data to the file: \n \n");
	
	if(assign != NULL)
	{
		printf("File Opened");
		
		fprintf(assign,"\n");
		fprintf(assign,data);
		printf("\n");
		printf("File Created and Data Added Successfully \n");
	}
	else
	{
		printf("File not Opened \n");
	}
	fclose(assign);
	printf("File Closed \n \n");
	
	
	printf("--------Here we are displaying the contents of the created file : --------\n \n");
	assign = fopen("Assignemnt.txt","r");
	if(assign != NULL)
	{
		while(fgets(data,sizeof(data),assign) != NULL)
		{
			printf("\n %s",data);
		}
	}
}
