#include<iostream>
/*
Q-1.3. Write two small programs: one using Procedural Programming (POP) to calculate the area
of a rectangle, and another using Object-Oriented Programming (OOP) with a class and object for
the same task.

In this file : I used C++ approach.
*/
using namespace std;
class Rectangle
{
	public:
	int len;
	int wid;
	
	void area()
	{
		cout<<"Enter the length of the rectangle : ";
		cin>>len;
		cout<<"Enter the width of the rectangle : ";
		cin>>wid;
		cout<<"The area of the rectangle is "<<len*wid<<" units";
	}
};
int main()
{
	Rectangle R;
	R.area();
}
