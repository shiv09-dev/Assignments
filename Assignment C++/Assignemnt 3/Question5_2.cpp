#include<iostream>
using namespace std;

int main()
{
	int row, col,i,j;
	cout<<"Enter number of Rows : ";
	cin>>row;
	cout<<"Enter number of Columns : ";
	cin>>col;
	
	int arr_1[row][col], arr_2[row][col], ans[row][col];
	cout<<"\n";
	
	cout<<"Enter Elements of Array 1 : "<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"Array ["<<i<<"]["<<j<<"] : ";
			cin>>arr_1[i][j];	
		}	
	} 
	
	cout<<"\n";
	cout<<"Enter Elements of Array 2 : "<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"Array ["<<i<<"]["<<j<<"] : ";
			cin>>arr_2[i][j];	
		}	
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			ans[i][j] = arr_1[i][j] + arr_2[i][j];	
		}	
	}
	
	cout<<"\n";
	cout<<"Addition of Both Arrays is : "<<endl;
	for(i=0;i<row;i++)
	{
		cout<<"\n";
		for(j=0;j<col;j++)
		{
			cout<<"\t"<<ans[i][j];	
		}	
	}
	

}
