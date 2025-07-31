#include<iostream>
using namespace std;

int main()
{
	int choice,number1,number2,ans;
	
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
			case 1: ans = number1 + number2;
					break;
					
			case 2: ans = number1 - number2;
					break;
					
			case 3: ans = number1 * number2;
					break;
					
			case 4: ans = number1 / number2;
					break;
					
			case 5: 
					cout<<"Exiting the Program \n"<<endl;
					break;
					
			default:
					cout<<"Invalid choice \n"<<endl;
					break;
		}
		cout<<"Answer is :"<<ans<<endl;
		cout<<"\n";
	}while(choice!=5);	
}
