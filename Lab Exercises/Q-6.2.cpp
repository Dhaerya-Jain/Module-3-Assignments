#include<iostream>
using namespace std;
/*
Q-6.2. Create a class BankAccount with data members like balance and member functions 
like deposit and withdraw. Implement encapsulation by keeping the data members private.
*/

class BankAccount 
{
	private:
    int balance;
    
	public:
    // Constructor to initialize balance
    BankAccount() : balance(2000) {}
    
    void deposit(int amount) 
	{
        if (amount > 0) 
		{
            balance = balance + amount;
            cout<<"Deposited : "<< amount<<endl;
            cout<<"Final Balance : "<<balance<<endl;
        } 
		else 
		{
            cout <<"Deposit amount must be positive."<< endl;
        }
    }
    void withdraw(int amount) 
	{
        if (amount > 0 && amount <= balance) 
		{
            balance = balance - amount;
            cout << "Withdrawn: " << amount << endl;
            cout<<"Final Balance : "<<balance<<endl;
        } 
		else if (amount > balance) 
		{
            cout << "Withdrawn amount cannot be greater than present balance." << endl;
        } 
		else 
		{
            cout << "Withdrawal amount must be positive." << endl;
        }
    }
    int getBalance() const 
	{
        return balance;
    }
};
int main() 
{
    BankAccount b;
    int deposit, withdraw;
    int choice;
    
    b.deposit(2000);
    cout << "Initial balance set to: 2000" << endl;
    while (true) 
	{
        cout << "\nWhat do you want to do?" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice) 
		{
            case 1:
                cout << "Enter the amount you want to deposit: ";
                cin >> deposit;
                b.deposit(deposit);
                break;
            case 2:
                cout << "Enter the amount you want to withdraw: ";
                cin >> withdraw;
                b.withdraw(withdraw);
                break;
            
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}

