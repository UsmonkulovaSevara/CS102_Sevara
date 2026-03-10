#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int balance = 500;
// Deposit function
void deposit() {
    int amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    balance = balance + amount;
    cout << "New balance: " << balance << endl;
    }
// Withdraw function
void withdraw() {
    int amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    if (amount > balance) {
        cout << "Insufficient balance!" << endl;
    }
    else {
        balance = balance - amount;
        cout << "New balance: " << balance << endl;
    }
    }
// Check balance function
void checkBalance() {
    cout << "Current balance: " << balance << endl;
}
int main() {
    char choice;
    do {
        cout << "\n--- Banking Menu ---" << endl;
        cout << "D - Deposit" << endl;
        cout << "W - Withdraw" << endl;
        cout << "B - Check Balance" << endl;
        cout << "E - Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 'D':
                deposit();
                break;
            case 'W':
                withdraw();
                break;
            case 'B':
                checkBalance();
                break;
            case 'E':
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
            }
    } while (choice != 'E');
    return 0;
    }