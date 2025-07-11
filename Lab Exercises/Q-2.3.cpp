#include<iostream>
/*
Q-2.3. Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
operators. Perform operations using each type of operator and display the results.
*/

using namespace std;
int main()
{
	int a=10,b=5;
	
	//Arithematic Operators
	cout << "Arithmetic Operators:" << endl;
	cout << "a + b = " << (a + b) << endl; 
    cout << "a - b = " << (a - b) << endl; 
    cout << "a * b = " << (a * b) << endl; 
    cout << "a / b = " << (a / b) << endl; 
    cout << "a % b = " << (a % b) << endl; 
    cout << endl;
    
    // Relational Operators
    cout << "Relational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl; 
    cout << "a != b: " << (a != b) << endl; 
    cout << "a > b: " << (a > b) << endl; 
    cout << "a < b: " << (a < b) << endl; 
    cout << "a >= b: " << (a >= b) << endl; 
    cout << "a <= b: " << (a <= b) << endl; 
    cout << endl;
    
    // Logical Operators
    bool x = true, y = false;
    cout << "Logical Operators:" << endl;
    cout << "x && y: " << (x && y) << endl; 
    cout << "x || y: " << (x || y) << endl; 
    cout << "!x: " << (!x) << endl; 
    cout << endl;
    
    // Bitwise Operators
    int m = 5;  
    int n = 3;  
    cout << "Bitwise Operators:" << endl;
    cout << "m & n: " << (m & n) << endl; 
    cout << "m | n: " << (m | n) << endl; 
}
