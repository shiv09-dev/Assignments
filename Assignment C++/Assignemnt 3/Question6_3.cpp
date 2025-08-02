#include<iostream>
using namespace std;

class Person
{
	public:
			int age;
			string name;
			string address;
			
			void getdetails()
			{
				cout<<"Enter name : ";
				cin>>name;
				cout<<"Enter age : ";
				cin>>age;
				cout<<"Enter the address : ";
				cin>>address;	
			}
};

class Student : public Person
{
	private:
				int roll_no;
	public:
			void display()
			{
				cout<<"Enter Roll NO : ";
				cin>>roll_no;
				
				cout<<"\n \n ";
				cout<<"Name of the student : "<<name<<endl;
				cout<<"Age of the student : "<<age<<endl;
				cout<<"Address of teh student : "<<address<<endl;
				cout<<"Roll NO of the student : "<<roll_no<<endl;
			}	
};

class Teacher : public Person
{
	private:
				string depart;
	public:
			void display()
			{
				cout<<"Enter Department : ";
				cin>>depart;
				
				cout<<"\n \n";
				cout<<"Name of the Teacher is : "<<name<<endl;
				cout<<"Age of the Teacher is : "<<age<<endl;
				cout<<"Adrress of the teacher is : "<<address<<endl;
				cout<<"Department of Techer is : "<<depart<<endl;
			}	
};

int main()
{
	
	Student s;
	s.getdetails();
	s.display();
	
	cout<<"\n \n ";
	
	Teacher t;
	t.getdetails();
	t.display();
}
