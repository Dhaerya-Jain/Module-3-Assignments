#include<iostream>
using namespace std;
/*
Q-6.3. Write a program that implements inheritance using a base class Person and derived 
classes Student and Teacher. Demonstrate reusability through inheritance.
*/ 

class Person
{
	public:
	void msg1()
	{
	cout<<"This msg is from the class Person."<<endl;
	}
};
class Student:public Person
{
	public:
	void msg2()
	{
	cout<<"This msg is from the class Student."<<endl;
	}
};
class Teacher:public Person
{
	public:
	void msg3()
	{
	cout<<"This msg is from the class Teacher."<<endl;
	}
};

int main()
{
	Person p;
	p.msg1();
	
	Student s;
	s.msg1();
	s.msg2();
	
	Teacher t;
	t.msg1();
	t.msg3();
}

