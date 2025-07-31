#include<iostream>  
#include<string>  
using namespace std;
  
string name1;  
string department;  
string subject;
  
class Person
{  
	public:  
			void name()
			{  
				cout<<"Enter Name : ";  
				cin>>name1; 
			}  
			void depart()
			{  
				cout<<"Enter Department Name : ";  
				cin>>department; 
			}  
			void sub()
			{  
				cout<<"Enter Subject Name : ";  
				cin>>subject; 
			}  
   
};
  
class Student:public Person
{  
  	public:   
   			void display()
			{     
    			cout<<"Name of the Student is : "<<name1<<endl;  
    			cout<<"Department Student is studying in : "<<department<<endl;  
    			cout<<"Subject Student is studying : "<<subject<<endl;  
 			}  
}; 
 
class Teacher:public Person
{  
 	public:  
 			void display()
			 {  
    			cout<<"Name of the Teacher : "<<name1<<endl;   
    			cout<<"Teacher teaching in the Department : "<<department<<endl;  
    			cout<<"Teacher teaching the Subject is : "<<subject<<endl;  
 			}  
};
  
int main()
{  
 	cout<<"Information of Student"<<endl; 
	  
 	Student s;  
	s.name();  
	s.depart();  
	s.sub();  

	 
	cout<<"\n";
	 
	cout<<"Information of Teacher "<<endl;  
	
	Teacher t;  
	t.name();  
	t.depart();  
	t.sub(); 
	
	s.display();  
	cout<<"\n \n ";
	t.display();    
}
