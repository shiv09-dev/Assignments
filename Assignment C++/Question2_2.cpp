#include<iostream>
using namespace std;

int main()
{
/*
	//Implicit Type Conversions 
	int x = 10;
	float f = 5.5f;
	float ans;
	
	ans = x + f;
	cout<<"Implicit Type Conversion Addition is : "<<ans<<endl;
*/	


	//Explicit Type Conversion
	int a = 20;
	double d = 15.5;
	int a1 , a2;
	
	a1 = (int)d;
	cout<<"Explicit Conversion from double to int : "<<a1<<endl;
	
	a+=d;
	a2 = (double)a;
	cout<<"Explicit Conversion from int to double : "<<a2<<endl;
	
}
