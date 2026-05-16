#include <iostream>
#include <vector>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string ownerName;
    double balance;

public:
    // Constructor
    BankAccount(int accNo, string name, double bal) {
        accountNumber = accNo;
        ownerName = name;
        balance = bal;
    }

    // Deposit function
    void deposit(double amount) {
        balance += amount;
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Invalid Transaction:" << endl;
        } else {
            balance -= amount;
        }
    }

    // Display function
    void display() {
        cout << accountNumber << " "
             << ownerName << " "
             << balance << endl;
    }

    // Getter for account number
    int getAccountNumber() {
        return accountNumber;
    }

    // Destructor
    ~BankAccount() {
    }
};

int main() {

    int n;
    cin >> n;

    vector<BankAccount> accounts;

    // Input accounts
    for (int i = 0; i < n; i++) {
        int accNo;
        string name;
        double bal;

        cin >> accNo >> name >> bal;

        accounts.push_back(BankAccount(accNo, name, bal));
    }

    int q;
    cin >> q;

    // Process operations
    for (int i = 0; i < q; i++) {

        int accNo;
        string operation;
        double amount;

        cin >> accNo >> operation >> amount;

        for (int j = 0; j < accounts.size(); j++) {

            if (accounts[j].getAccountNumber() == accNo) {

                if (operation == "DEPOSIT") {
                    accounts[j].deposit(amount);
                }

                else if (operation == "WITHDRAW") {
                    accounts[j].withdraw(amount);
                }
            }
        }
    }

    // Final Output
    for (int i = 0; i < accounts.size(); i++) {
        accounts[i].display();
    }

    return 0;
}
