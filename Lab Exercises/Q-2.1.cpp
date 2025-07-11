#include<iostream>
/*
Q-2.1. Write a C++ program that demonstrates the use of variables and constants. 
Create variables of different data types and perform operations on them.
*/
using namespace std;
int main()
{
	const double pi = 3.1415926;
	int rad,age;
	char name[50],grade;
	float per,area; 
//Area of circle:
	cout<<"Enter the radius of the circle : ";
	cin>>rad;
	area = pi*rad*rad;
	cout<<"The area of the circle is : "<<area<<endl;
	cout<<"-------------------------------------"<<endl;

//Using the remaining data types:
	cout<<endl;
	cout<<"Enter the Student name : ";
	cin>>name;
	cout<<"Enter the Student age : ";
	cin>>age;
	cout<<"Enter the Student Percentage : ";
	cin>>per;
	if(per>=85)
	{
		grade = 'A';
	}
	else if(per>=65 && per<85)
	{
		grade = 'B';
	}
	else
	{
		grade = 'C';
	}
	cout<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<endl;
	cout<<"Student Name : "<<name<<endl;
	cout<<"Student Age : "<<age<<endl;
	cout<<"Student Percentage : "<<per<<endl;
	cout<<"Your Grade according to you Percentage is : "<<grade;
}
