#include<iostream>
using namespace std;

int num1 = 1000;

int display()
{
	int y;
	num1 += 500;
	cout<<num1;
}

int main()
{
	int x = 10;
	cout<<"Global Variable Before Increment : "<<num1<<endl;
	
	cout<<"Function Local Variable Performing Increment : ";
	display();
	
	cout<<"\n";
	cout<<"Local Variable After Increment : "<<num1<<endl;
}
