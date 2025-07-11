#include<iostream>
/*
Q-4.2. Write a C++ program that calculates the factorial of a number using recursion
*/
using namespace std;

long int factorial(int num)
{
	if(num<=1)
	{
		return 1;
	}
	else
	{
		return num * factorial(num - 1);
	}
}

int main()
{
	int num;
	cout<<"Enter the number of which you want the factorial : ";
	cin>>num;
	
	cout<<"The factorial of the number is: "<<factorial(num);
}
