#include <iostream>
using namespace std;

class BankAccount 
{
	private:
    		double balance; 

	public:
    		BankAccount(double initialBalance) 
			{
        		if (initialBalance >= 0)
        		{
        			balance = initialBalance;	
				}
        		else
        		{
        			balance = 0;	
				}
			}
            
    		void deposit(double amount) 
			{
        		if (amount > 0) 
				{
            		balance += amount;
            		cout << "Deposited: " << amount << endl;
        		} 
				else 
				{
            		cout << "Invalid deposit amount." << endl;
        		}
    		}

    		void withdraw(double amount) 
			{
        		if (amount > 0 && amount <= balance) 
				{
            		balance -= amount;
            		cout << "Withdrawn: " << amount << endl;
        		}
				else 
				{
            		cout << "Invalid or insufficient funds for withdrawal." << endl;
        		}
    		}

    		double getBalance() const 
			{
        		return balance;
    		}
};

int main() 
{
    BankAccount account(1000); 

    account.deposit(500);     
    account.withdraw(300);   
    cout << "Current Balance: " << account.getBalance() << endl;
}

