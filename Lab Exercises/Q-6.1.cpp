#include<iostream>
using namespace std;
/*
Q-6.1.Write a C++ program that defines a class Calculator with functions for addition, 
subtraction, multiplication, and division. Create objects to use these functions
*/

class Calculator
{
	public:
	int num1,num2;
	
	int add(int num1,int num2)
	{
		return num1+num2;
	}
	int subtract(int num1,int num2)
	{
		return num1-num2;
	}
	int multiply(int num1,int num2)
	{
		return num1*num2;
	}
	int divide(int num1,int num2)
	{
		return num1/num2;
	}	
};

int main()
{
	Calculator calc;
	int num1,num2,choice;
	cout<<"Enter value for number 1: ";
	cin>>num1;
	cout<<"Enter value for number 2: ";
	cin>>num2;
	cout<<"Enter what do you want to perform :"<<endl;
	cout<<"1. Addition"<<endl;
	cout<<"2. Subtraction"<<endl;
	cout<<"3. Multiplication"<<endl;
	cout<<"4. Division"<<endl;
	cout<<"Enter : ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<calc.add(num1,num2);
		break;
		case 2:
			cout<<calc.subtract(num1,num2);
		break;
		case 3:
			cout<<calc.multiply(num1,num2);
		break;
		case 4:
			cout<<calc.divide(num1,num2);
		break;
		default:
			cout<<"Enter a valid choice (1,2,3,4)....";
		break;
	}
}
