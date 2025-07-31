#include<iostream>
using namespace std;

int main()
{
	int i,num,mul;
	
	cout<<"Enter number you the Multiplication table for : ";
	cin>>num;
	
	for(i=1;i<=10;i++)
	{
		mul = num * i;
		cout<<num<<"*"<<i<<"="<<mul<<endl;
	}
}
