#include<stdio.h>

struct Student
{
	int roll_no;
	char name[10];
	int marks;
};
int main()
{
	int i,n;
	struct Student s[10];
	
	printf("Enter number of students you want the data for : ");
	scanf("%d",&n);
	printf("\n");
	
	for(i=1;i<=n;i++)
	{
		printf("Enter the details in the given format \t --ROLL_NO  NAME  MARKS-- \n");
		scanf("%d %s %d", &s[i].roll_no, &s[i].name, &s[i].marks);
		printf("\n");
	}
	
	printf("\n");
	
	for(i=1;i<=n;i++)
	{
		printf("Details of Student [%d] is : ",i);
		printf("Roll_No: %d   Name: %s   Marks: %d \n",s[i].roll_no, s[i].name, s[i].marks);
	}
}
