#include<iostream>
using namespace std;

/*
Q-5.1. Write a C++ program that accepts an array of integers, calculates the sum and
average, and displays the results.
*/

int main()
{
	int arr[100],size;
	int sum,avg;
	cout<<"Kindly enter the size of the array :";
	cin>>size;
	cout<<"Enter the elements in the array:-"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the element on index "<<i<< ": ";
		cin>>arr[i];
		sum = sum + arr[i];
	}
	avg = sum/size;
	cout<<"Sum of the elements of the array is = "<<sum<<endl;
	cout<<"Average of the elements of the array is = "<<avg<<endl;
}
