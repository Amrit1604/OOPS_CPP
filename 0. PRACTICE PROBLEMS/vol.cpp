#include <iostream>
using namespace std;

// Abstract base class List
class List {
public:
    virtual void store(int value) = 0;    // Pure virtual function for storing a value
    virtual int retrieve() = 0;           // Pure virtual function for retrieving a value
};

// Derived class Stack (LIFO behavior)
class Stack : public List {
private:
    int arr[100];     // Array to store stack elements
    int top;          // Index of the top element

public:
    Stack() : top(-1) {}

    void store(int value) override {
        if (top >= 99) {
            cout << "Stack overflow!" << endl;
            return;
        }
        arr[++top] = value;  // Push value onto stack
    }

    int retrieve() override {
        if (top < 0) {
            cout << "Stack underflow!" << endl;
            return -1;
        }
        return arr[top--];   // Pop value from stack
    }
};

// Derived class Queue (FIFO behavior)
class Queue : public List {
private:
    int arr[100];    // Array to store queue elements
    int front;       // Index of the front element
    int rear;        // Index of the rear element

public:
    Queue() : front(0), rear(0) {}

    void store(int value) override {
        if (rear >= 100) {
            cout << "Queue overflow!" << endl;
            return;
        }
        arr[rear++] = value;  // Enqueue value
    }

    int retrieve() override {
        if (front == rear) {
            cout << "Queue underflow!" << endl;
            return -1;
        }
        return arr[front++];  // Dequeue value
    }
};

// Main function to demonstrate Stack and Queue
int main() {
    int type;
    cout << "Enter 1 for Stack, 2 for Queue: ";
    cin >> type;

    List* list = nullptr;
    if (type == 1) {
        list = new Stack();  // Create Stack object
        cout << "You chose Stack." << endl;
    } else if (type == 2) {
        list = new Queue();  // Create Queue object
        cout << "You chose Queue." << endl;
    } else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    int operation, value;
    while (true) {
        cout << "Enter 1 for store, 2 for retrieve, 0 to exit: ";
        cin >> operation;

        if (operation == 1) {  // Store operation
            cout << "Enter value to store: ";
            cin >> value;
            list->store(value);
        } else if (operation == 2) {  // Retrieve operation
            int result = list->retrieve();
            if (result != -1) {
                cout << result << endl;
            }
        } else if (operation == 0) {  // Exit
            break;
        } else {
            cout << "Invalid operation!" << endl;
        }
    }

    delete list;  // Clean up the dynamically allocated memory
    return 0;
}

