#include<iostream> 
using namespace std;
 
class Calculator 
{ 
 	public : 
  			void add(int a,int b) 
  			{ 
   				cout <<"Adition of two number is :"<<a+b;
				cout<<"\n"; 
  			}
			   
  			void sub(int a,int b) 
  			{ 
   				cout <<"Subtraction of two number is :"<<a-b;
				cout<<"\n"; 
  			} 
  
  			void mul(int a,int b) 
  			{ 
   				cout <<"multiplication of two number is :"<<a*b;
				cout<<"\n"; 
  			} 
  
  			void div(int a,int b) 
  			{ 
   				cout <<"divison of two number is :"<<a/b;
				cout<<"\n"; 
  			} 
}; 
 
int main() 
{ 
 
 	int num1,num2,choice;
	  
 	cout <<"Enter the number 1 and 2 :"; 
 	cin>>num1>>num2; 
 	cout<<"\n";
 	
	Calculator c; 
 	cout <<"1. Addition : \n"; 
 	cout <<"2. Subtraction : \n"; 
 	cout <<"3. Multiplication : \n"; 
 	cout <<"4. Divison : \n";
	cout<<"5.Exit the program \n"; 
 
 	while(choice!=5) 
 	{ 
  		cout <<"\n Enter the choice :"; 
  		cin >> choice; 
 
 		switch(choice) 
 		{   
  			case 1:	c.add(num1,num2); 
  					break;
					   
  			case 2: c.sub(num1,num2); 
  					break;
					   
  			case 3: c.mul(num1,num2); 
  					break; 
  
  			case 4: c.div(num1,num2); 
  					break; 
  
  			case 5: cout<<"Exiting";
  					break;      
 		} 
	}
}
