#include<iostream>
using namespace std;

int main()
{
	int num = 55, num1;
	int limit = 5;
	
	cout<<"You have 5 tries to guess the Number"<<endl;
	cout<<"\n";
	
	while(limit != 0)
	{
		
		cout<<"Guess the Number : ";
		cin>>num1;
		
		if(num1 == num)
		{
			cout<<"You Guessed the right Number"<<endl;
			break;
		}
		else if(num1 > num)
		{
			cout<<"Your Guess is too High"<<endl;
			cout<<"\n";
		}
		else
		{
			cout<<"Your Guess is too Low"<<endl;
			cout<<"\n";
		}
		
		limit--;
	}
	
}
