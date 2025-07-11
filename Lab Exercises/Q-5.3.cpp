#include<iostream>
using namespace std;

/*
Q-5.3.Write a C++ program to check if a given string is a palindrome.
*/

int main()
{
	string str, rev;
    cout<<"Enter a string: ";
    cin>>str;

    
    for(int i=str.length()-1;i>=0;i--) 
	{
        rev += str[i];
    }
    cout<<"Rev : "<<rev<<endl;
    
    if(str == rev) 
	{
        cout<<"String is Palindrome.";
    } 
	else 
	{
        cout<<"String is Not Palindrome.";
    }

}
