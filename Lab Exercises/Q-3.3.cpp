#include<iostream>
/*
Q-3.3. Write a C++ program to display the multiplication table of a given number using a for
loop.
*/
using namespace std;
int main()
{
	int num,mul;
	cout<<"Enter the number of which you want the table : ";
	cin>>num;
	cout<<"Enter the number of multipliers : ";
	cin>>mul;
	
	for(int i=1;i<=mul;i++)
	{
		cout<<num<<" x "<<i<<" = "<<num*i<<endl;	
	}	
}
