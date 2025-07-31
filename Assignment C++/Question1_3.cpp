/*
#include<stdio.h>
int main()
{
	int width , length;
	int area;
	
	printf("Enter width of the Rectangle : ");
	scanf("%d", &width);
	
	printf("Enter Length of Rectangle : ");
	scanf("%d", &length);
	
	area = width * length;
	printf("\n \n");
	printf("Area of Rectangle is : %d", area); 
}
*/

#include<iostream>
using namespace std;

class Rectangle
{
	int width, length;
	int area;
	
	public:
			void getData(int width, int length)
			{
				cout<<"Enter width of Rectangle : ";
				cin>>width;
				cout<<"Enter Length of Rectangle : ";
				cin>>length;
				
				area = width * length;
			}	
			
			void display()
			{
				cout<<area;
			}
};
int main()
{
	int w1, l1;
	Rectangle r;
	r.getData(w1,l1);
	cout<<"\n";
	cout<<"Area of Reactangle is : ";
	r.display();
}

