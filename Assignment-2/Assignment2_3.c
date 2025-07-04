#include<stdio.h>
int main()
{
	//Here we are declaring and initializing the values to different variables
	int a = 10;
	char b;
	float c =10.5;
	const float PI = 3.14;
	
	//Here we are printing the assigned values to the variables
	printf("Integer a has value : %d \n \n",a);
	printf("Float c has value : %f \n \n",c);
	printf("Enter character : ");
	scanf("%c",&b);
	printf("Character b has value : %c \n \n",b);
	printf("Constant  variable PI has vlaue  : %f \n",PI); 
}
