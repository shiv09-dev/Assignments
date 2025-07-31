#include<iostream>
using namespace std;
int main()
{
	cout<<"***Arithmetic Operations*** \n \n";
	int choice,number1,number2,answer;
	cout<<"Enter number 1 : ";
	cin>>number1;
	cout<<"Enter number 2 : ";
	cin>>number2;
	
	cout<<"\n";
	
	do
	{
		cout<<"1. Addition \n";
		cout<<"2. Subtraction \n";
		cout<<"3. Multiplication \n";
		cout<<"4. Division \n";
		cout<<"5. Exit \n \n";
		
		cout<<"Please enter your choice : ";
		cin>>choice;
		
		cout<<"\n";
		
		switch(choice)
		{
			case 1: answer=number1+number2;
					break;
					
			case 2: answer=number1-number2;
					break;
					
			case 3: answer=number1*number2;
					break;
					
			case 4: answer=number1/number2;
					break;
					
			case 5: 
					cout<<"Exiting the Program \n";
					break;
					
			default:
					cout<<"Invalid choice \n";
					break;
		}
		cout<<"Answer is : "<<answer<<endl;
	}while(choice!=5);	
	
	cout<<"\n \n";
	
	cout<<"***Relational and Logical Operations*** \n \n";
	int a = 10, c,d,g,k,l,h = 10,ans;
	float b = 5.2 ,e,f;
	float i = 34.5 , j = 34.5;
	
	c = a>b;
	cout<<"Is a greater than b ?? "<<c<<endl;
	
	d = a<b;
	cout<<"Is a Less than than b ?? "<<d<<endl;
	
	a +=15;
	cout<<"Value of A after increment is : "<<a<<endl;
	
	e = (a > b && b<a);
	cout<<"AND operation between a nd b is : "<<e<<endl;
	
	f = (a = b || b>a);
	cout<<"OR opertation between a nd b is : "<<f<<endl;
	
	g = a != b;
	cout<<"Not equal operation between a and b is : "<<g<<endl;
	
	k = i>=j;
	cout<<"Is i greater than or equal to j ?? "<<k<<endl;
	
	l = i<=j;
	cout<<"Is i less than or equal to j ?? "<<l<<endl;

	ans = a & h;
	cout<<"Bitwise  AND operation between a and b is : "<<ans<<endl;

	//ans = a | h;
	//cout<<"Bitwise OR operation between a and b is : %d"<<a | h;
}
