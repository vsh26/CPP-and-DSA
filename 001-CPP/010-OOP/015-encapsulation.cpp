#include<iostream>
using namespace std;

class BankAccount{

    private:
        string accountNumber;
        double balance;

    public:
        BankAccount(string accNum, double initBalance){
            accountNumber = accNum;
            balance = initBalance;
        }

        // Getters
        double getBalance() const{
            return balance;
        }

        // Method to deposit money
        void deposit(double amount){
            if(amount > 0){
                balance += amount;
                cout << "Deposited: " << amount << endl;
            }else{
                cout << "Invalid Deposit!" << endl;
            }
        }

        // Method to withdraw
        void withdraw(double amount){
            if(amount > 0 && amount <= balance){
                balance -= amount;
                cout << "Withdrawl amount: " << amount << endl;
            }else{
                cout << "Invalid withdrawl amount!" << endl;
            }
        }
};

int main(){

    BankAccount myAccount("BKID12345", 1000000);
    cout << "Balance: " << myAccount.getBalance() << endl;
    myAccount.deposit(500000);
    cout << "Balance: " << myAccount.getBalance() << endl;
    myAccount.withdraw(100000);
    cout << "Balance: " << myAccount.getBalance() << endl;

    return 0;
}