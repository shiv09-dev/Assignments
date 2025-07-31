#include<iostream>
using namespace std;

int main()
{
	int i,num,sum = 0 ,avg;
	cout<<"Enter Size of the Array : ";
	cin>>num;
	
	int arr_1[num];
	
	for(i=0;i<num;i++)
	{
		cout<<"Enter elements of Array ["<<i<<"] : ";
		cin>>arr_1[i];
	}

	cout<<"\n \n";
	
	for(i=0;i<num;i++)
	{
		cout<<"Elements of Array ["<<i<<"] : "<<arr_1[i];
		cout<<"\n";
		
		sum = sum + arr_1[i];
	}
	cout<<"\n";
	cout<<"Sum of Elements of Array is : "<<sum;
	
	cout<<"\n \n";
	
	avg = sum / num;
	cout<<"Average of Elements of Array is : "<<avg<<endl;
}
