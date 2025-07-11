#include<iostream>
/*
Q-3.1. Write a C++ program that takes a student’s marks as input and calculates the 
grade based on if-else conditions.
*/
using namespace std;
int main()
{
	float phy,chem,math,eng;
	char grade;
	
	cout<<"Enter your marks in Physics out of 100 : ";
	cin>>phy;
	cout<<"Enter your marks in Chemistry out of 100 : ";
	cin>>chem;
	cout<<"Enter your marks in Mathematics out of 100 : ";
	cin>>math;
	cout<<"Enter your marks in English out of 100 : ";
	cin>>eng;
	
	float sum = phy + chem + math  +eng;
	float per = (sum/4);
	
	cout<<"Your overall PCM percentage is : "<<per<<endl;
	
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
	cout<<"Your Grade according to you Percentage is : "<<grade;
}
