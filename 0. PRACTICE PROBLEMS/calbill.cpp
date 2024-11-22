#include <iostream>
using namespace std;

class Bill {
public:
    int item_price;
    int qty;

    Bill(int price, int quantity) : item_price(price), qty(quantity) {}

    int calculateBill() {
        int bill = item_price * qty;
        cout << "Calculated Bill: " << bill << endl;
        return bill;
    }
};

class Cash : public Bill {
public:
    int notes_2000, notes_500, notes_100, notes_50, notes_10;

    Cash(int price, int quantity, int n2000, int n500, int n100, int n50, int n10)
        : Bill(price, quantity), notes_2000(n2000), notes_500(n500), notes_100(n100), notes_50(n50), notes_10(n10) {}

    int calculateCash() {
        int cash = (notes_2000 * 2000) + (notes_500 * 500) + (notes_100 * 100) +
                   (notes_50 * 50) + (notes_10 * 10);
        cout << "Total Cash Provided: " << cash << e7*-+----------------------------------------------------------ndl;
        return cash;
    }

    void checkAndDisplay() {
        int total_bill = calculateBill();
        int total_cash = calculateCash();

        if (total_cash >= total_bill) {
            cout << "Clear: Payment Successful!" << endl;
        } else {
            cout << "Need to pay: " << total_bill - total_cash << endl;
        }
    }
};

int main() {
    int item_price, qty, n2000, n500, n100, n50, n10;

    cout << "Enter item price: ";
    cin >> item_price;
    cout << "Enter quantity: ";
    cin >> qty;
    cout << "Enter number of Rs 2000 notes: ";
    cin >> n2000;
    cout << "Enter number of Rs 500 notes: ";
    cin >> n500;
    cout << "Enter number of Rs 100 notes: ";
    cin >> n100;
    cout << "Enter number of Rs 50 notes: ";
    cin >> n50;
    cout << "Enter number of Rs 10 notes: ";
    cin >> n10;

    Cash cash(item_price, qty, n2000, n500, n100, n50, n10);
    cash.checkAndDisplay();

    return 0;
}

