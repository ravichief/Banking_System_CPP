/*
Week 3:
Name of project: Banking System
Description: This project on the banking system will be a simple one in which there will be some options like :
- Create account
- Deposit
- Withdraw
- Close the account
- Balance enquiry
- Exit
This project will contain a menu from which the user or the customer will select whether he/she wants to create an account, deposit or withdraw the money, close the account, or the balance enquiry.
*/
#include <iostream>
#include <string>
using namespace std;
class Account{
public:
    int accountNumber;
    string name;
    double balance;
    int pin;
    Account(){
        accountNumber = 0;
        name = "";
        balance = 0;
        pin = 0;
    }
    Account(int accountNumber, string name, double balance, int pin){
        this->accountNumber = accountNumber;
        this->name = name;
        this->balance = balance;
        this->pin = pin;
    }
};
int main(){
    int choice;
    Account account;
    int valid = 0; 
    do{
        cout << "\n1. Create account" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Close account" << endl;
        cout << "5. Balance enquiry" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice){
        case 1:
            cout << "Enter account number: ";
            cin >> account.accountNumber;
            cout << "Enter name: ";
            cin >> account.name;
            cout << "Enter balance: ";
            cin >> account.balance;
            cout << "Enter PIN: ";
            cin >> account.pin;
            valid = 1; 
            break;
        case 2:
            if (valid == 0){
                cout << "No account exists!" << endl;
                break;
            }
            cout << "Enter PIN: ";
            int pin;
            cin >> pin;
            if (pin != account.pin){
                cout << "Wrong PIN!" << endl;
                break;
            }
            cout << "Enter amount to deposit: ";
            double amount;
            cin >> amount;
            account.balance += amount;
            cout << "Deposit successful!" << endl;
            break;
        case 3:
            if (valid == 0){
                cout << "No account exists!" << endl;
                break;
            }
            cout << "Enter PIN: ";
            pin;
            cin >> pin;
            if (pin != account.pin){
                cout << "Wrong PIN!" << endl;
                break;
            }
            cout << "Enter amount to withdraw: ";
            amount;
            cin >> amount;
            if (amount > account.balance){
                cout << "Insufficient balance!" << endl;
                break;
            }
            account.balance -= amount;
            cout << "Withdraw successful!" << endl;
            break;
        case 4:
            if (valid == 0){
                cout << "No account exists!" << endl;
                break;
            }
            cout << "Enter PIN: ";
            pin;
            cin >> pin;
            if (pin != account.pin){
                cout << "Wrong PIN!" << endl;
                break;
            }
            cout << "Account closed!" << endl;
            account.accountNumber = 0;
            account.name = "";
            account.balance = 0;
            account.pin = 0;
            valid = 0; 
            break;
        case 5:
            if (valid == 0){
                cout << "No account exists!" << endl;
                break;
            }
            cout << "Enter PIN: ";
            pin;
            cin >> pin;
            if (pin != account.pin){
                cout << "Wrong PIN!" << endl;
                break;
            }
            cout << "Account Balance: " << account.balance << endl;
            break;
        case 6:
            cout << "Thank You!" << endl;
            break;
        default:
            cout << "Invalid Choice Made!" << endl;
            break;
        }
    } while (choice != 6);
    return 0;
}