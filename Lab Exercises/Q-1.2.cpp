#include<iostream>
/*
Q-1.2. Write a C++ program that accepts user input for their name and age and then
displays a personalized greeting.
*/
using namespace std;
int main()
{
	int age;
	char name[20];
	cout<<"Kindly enter your Name : ";
	cin>>name;
	cout<<"Kindly enter your age : ";
	cin>>age;
	cout<<"Good Morning Mr. "<<name<<endl;
	cout<<"How are you?";
}
