#include<iostream>
/*
Q-3.4. Write a program that prints a right-angled triangle using stars(*) with a nested loop.
*/
using namespace std;
int main()
{
	int row,i,j;
	
	cout<<"Enter the number of rows : ";
	cin>>row;
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}
