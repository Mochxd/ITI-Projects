#include <iostream>

using namespace std;

class Bank_Account {
private:
    int account_num;
    double balance;

public:
// Making Constructor
    Bank_Account(int accountnum, double intialbalance) : account_num(accountnum), balance(intialbalance) {}

// Member function for deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit of $" << amount << " successfully. New balance is: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount. Please enter a positive value." << endl;
        }
    }

// Member function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance = balance - amount;
            cout << "Withdrawal of $" << amount << " successful. New balance is: $" << balance << endl;
        } else if (amount > balance) {
            cout << "You don't have the required balace. Withdrawal failed." << endl;
        } else {
            cout << "Invalid withdrawal amount. Please enter a positive value." << endl;
        }
    }

// Member function to get balance
    double get_balance(){
        return balance;
    }
};

int main() {
// Creating a bank account object with account number and initial balance 
    Bank_Account myAccount(12345, 95293.5);

// Depositing into the account
    myAccount.deposit(680.5);

// Withdrawing from the account
    myAccount.withdraw(710.0);

// Trying to withdraw an invalid amount
    myAccount.withdraw(-3000.40);

// Trying to withdraw more than the current balance
    myAccount.withdraw(500000.50);

// Print the final balance
    cout << "Final balance is: $" << myAccount.get_balance() << endl;
    return 0;
}