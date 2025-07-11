#include<iostream>
using namespace std;

/*
Q-5.2.Write a C++ program to perform matrix addition on two 2x2 matrices. 
*/

int main()
{
	int arr1[10][10], arr2[10][10], i, j;
	int resultarr[10][10];
	
	cout<<"Enter elements in array 1:-"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"Enter element in index ["<<i<<","<<j<<"] :";
			cin>>arr1[i][j];
		}
	}
	cout<<"----------------------------------------------";
	cout<<"Enter elements in array 2:-"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"Enter element in index ["<<i<<","<<j<<"] :";
			cin>>arr2[i][j];
		}
	}
	cout<<"Addition of both the Matrices is:-"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			resultarr[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<resultarr[i][j]<<"  ";
		}
			cout<<endl;
	}
}
