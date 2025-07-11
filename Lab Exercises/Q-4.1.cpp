#include<iostream>
/*
Q-4.1. Write a C++ program that defines functions for basic arithmetic operations 
(add, subtract, multiply, divide). The main function should call these based on user input.
*/
using namespace std;

int add(int num1, int num2)
{
	return num1+num2;
}

int subtract(int num1, int num2)
{
	return num1-num2;
}

int multiply(int num1, int num2)
{
	return num1*num2;
}

int divide(int num1, int num2)
{
	return num1/num2;
}

int main()
{
	int num1,num2,choice;
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;
	cout<<"What do you want to perform?"<<endl;
	cout<<"1.Addition"<<endl;
	cout<<"2.Subtraction"<<endl;
	cout<<"3.Multiplication"<<endl;
	cout<<"4.Division"<<endl;
	cout<<"Enter (1,2,3,4) = ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"The addition is : "<<add(num1,num2);
			break;
		case 2:
			cout<<"The subtraction is : "<<subtract(num1,num2);
			break;
		case 3:
			cout<<"The multiplication is : "<<multiply(num1,num2);
			break;
		case 4:
			cout<<"The division is : "<<divide(num1,num2);
			break;
	}
}
