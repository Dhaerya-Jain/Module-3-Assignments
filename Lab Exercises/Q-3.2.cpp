#include<iostream>
/*
Q-3.2. Write a C++ program that asks the user to guess a number between 1 and 100. 
The program should provide hints if the guess is too high or too low. Use loops to allow 
the user multiple attempts.
*/
using namespace std;
int main() 
{
    int num = 30; 
    int guess = -1; 
    cout << "I've a number on my mind (between 1 and 100) and you have to guess it. I will provide you with hints." << endl;
    
	while (true) 
	{
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess < 1 || guess > 100) 
		{
            cout << "Please enter a number between 1 and 100." << endl;
            continue; 
        }
        if (guess == num) 
		{
            cout << "Bingo! You guessed it right." << endl;
            break; 
        } 
		else if (guess >= 20 && guess <= 40) 
		{
            cout << "You are very very close, try again!" << endl;
        } 
		else if (guess <= 10 || (guess >= 50 && guess <= 60)) 
		{
            cout << "You are close, try again!" << endl;
        } 
		else {
            cout << "You are far from the number, try again!" << endl;
        }
    }
    return 0;
}
