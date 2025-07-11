 #include<iostream>
/*
Q-4.3.Write a program that demonstrates the difference between local and global
variables in C++. Use functions to show scope.
*/
using namespace std;

int num = 100; 
int change_num()
{
	num = num + 20;
	cout<<"The changed number  is : "<<num;
}
int main()
{
	cout<<"Actual number is : "<<num<<endl;
	change_num();
}
