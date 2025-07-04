#include<stdio.h>
#include<string.h>

int main()
{
	int len;
	char name1[50],name2[50];
	printf("Enter String1 : ");
	gets(name1);
	
	printf("Enter String2 : ");
	gets(name2);
	
	
	len = strlen(name1);
	printf("Length of string is : %d",len);
	
	printf("\n");
	
	strcat(name1,name2);
	printf("Concated stirng is : %s",name1);
}
