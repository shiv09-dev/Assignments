#include<iostream>  
#include<string>  
using namespace std;
  
int main()
{
	int i;  
	string str,rev;  
	cout<<"Enter the string you want to check pallindrome for : "; 
	cin>>str;  
	  
	for(i=str.length()-1;i>=0;i--)
	{  
		rev+=str[i];  
	}  
	if(str==rev)  
	{  
		cout<<"This string is a Palindrome String."<<endl;  
	}	  
	else
	{  
	cout<<"This string is not a Palindrome String."<<endl;  
	}    
}
