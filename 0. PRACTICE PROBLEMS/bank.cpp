#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class Customer {
    string name;
    int balance, accountNum;

public:
    // Constructor to initialize customer details
    Customer(string name, int balance, int accountNum) {
        this->name = name;
        this->balance = balance;
        this->accountNum = accountNum;
    }

    // Deposit function
    void deposit(int amount) {
        if (amount > 0) {
            balance += amount; // Add the deposit amount to balance
            cout << amount << " is credited successfully. New balance: " << balance << endl;
        } else {
            throw invalid_argument("Deposit amount must be greater than 0.");
        }
    }

    // Withdraw function
    void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount; // Deduct the withdrawal amount from balance
            cout << amount << " is debited successfully. Remaining balance: " << balance << endl;
        } else if (amount > balance) {
            throw runtime_error("Insufficient balance for withdrawal.");
        } else {
            throw invalid_argument("Withdrawal amount must be greater than 0.");
        }
    }

    // Display account details
    void displayDetails() {
        cout << "Customer Name: " << name << endl;
        cout << "Account Number: " << accountNum << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    try {
        // Creating a customer
        Customer c1("Rohit", 5000, 12345);

        // Display initial details
        c1.displayDetails();

        // Deposit operation
        cout << "Enter amount to deposit: ";
        int depositAmount;
        cin >> depositAmount;
        c1.deposit(depositAmount);

        // Withdraw operation
        cout << "Enter amount to withdraw: ";
        int withdrawAmount;
        cin >> withdrawAmount;
        c1.withdraw(withdrawAmount);

        // Display updated details
        c1.displayDetails();
    } catch (const exception& e) {
        // Catch and display any exception
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}

