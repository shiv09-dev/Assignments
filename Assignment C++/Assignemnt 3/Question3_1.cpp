#include<iostream>
using namespace std;

int main()
{
	int marks;
	
	cout<<"Enter marks of the student : ";
	cin>>marks;
	
	if(marks >= 90)
	{
		cout<<"Passed the Exam with Grade A "<<endl;
	}
	
		else if(marks >= 80)
		{
			cout<<"Passe the Exam with Grade B"<<endl;
		}
	
		else if(marks >= 70)
		{
			cout<<"Passed the Exam with Grade C"<<endl;
		}
	
		else if(marks >= 50)
		{
			cout<<"Passed the Exam with Grade D"<<endl;
		}
	else
	{
		cout<<"Passed the Exam with Grade F"<<endl;
	}
}
