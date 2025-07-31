#include<iostream>
using namespace std;

int main()
{
	const float PI = 3.14; 
	int a = 10, b = 15, r;
	string name = "Shivam Dave";
	float c = 23.5 , d = 45.7;
	int sum ,area;
	float f_ans;
	
	sum = a+b;
	cout<<"Addition of both INT variables is : "<<sum;
	cout<<"\n \n";
	
	f_ans = c * d;
	cout<<"Multiplication of both float variables is : "<<f_ans;
	cout<<"\n \n";
	
	cout<<"Enter name : ";
	cin>>name;
	cout<"Name of the Student is : ";
	cout<<"\n \n";
	
	cout<<"Enter radius : ";
	cin>>r;
	area = PI * r * r;
	cout<<"Area of circle is : "<<area;
	
}
