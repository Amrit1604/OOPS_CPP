#include <iostream>
using namespace std;

class Transaction {
private:
    int transactionValue;

public:
    Transaction(int value) : transactionValue(value) {}

    int value() const {
        return transactionValue;
    }
};

class Account {
protected:
    int accountNumber;

public:
    Account(int accno) : accountNumber(accno) {}

    virtual bool process(Transaction t) {
        if (t.value() != 0) {
            cout << "Transaction of " << t.value() << " rupees approved for account " << accountNumber << endl;
            return true;
        }
        cout << "Transaction of value 0 rupees cannot be processed." << endl;
        return false;
    }

    int getAccountNumber() const {
        return accountNumber;
    }
};

class FilteredAccount : public Account {
private:
    int filteredCount;

public:
    FilteredAccount(int accno) : Account(accno), filteredCount(0) {}

    bool process(Transaction t) override {
        if (t.value() == 0) {
            filteredCount++;
            cout << "Transaction of value 0 rupees filtered for account " << getAccountNumber() << endl;
            return true;
        }
        return Account::process(t);
    }

    int filtered() const {
        return filteredCount;
    }
};

int main() {
    FilteredAccount fa(12345);

    Transaction t1(100);
    Transaction t2(0);
    Transaction t3(50);
    Transaction t4(0);

    fa.process(t1);
    fa.process(t2);
    fa.process(t3);
    fa.process(t4);

    cout << "Number of filtered transactions: " << fa.filtered() << endl;

    return 0;
}

