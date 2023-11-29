#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountID;
    std::string accountPassword;
    std::string accountHolder;
    double balance;

public:
    BankAccount(std::string id, std::string password, std::string holder, double initialBalance)
        : accountID(id), accountPassword(password), accountHolder(holder), balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << " successfully. New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount. Please enter a positive value." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << " successfully. New balance: $" << balance << std::endl;
        } else if (amount > balance) {
            std::cout << "Insufficient funds. Withdrawal amount exceeds the available balance." << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount. Please enter a positive value." << std::endl;
        }
    }

    void checkBalance() {
        std::cout << "Account Holder: " << accountHolder << std::endl;
        std::cout << "Current Balance: $" << balance << std::endl;
    }

    bool verifyPassword(std::string password) {
        return password == accountPassword;
    }
};

int main() {
    std::string accountID, accountPassword, accountHolder;
    double initialBalance;

    std::cout << "Enter Account ID: ";
    std::cin >> accountID;

    std::cout << "Enter Account Password: ";
    std::cin >> accountPassword;

    std::cout << "Enter Account Holder Name: ";
    std::cin.ignore(); // Clear the newline character left in the buffer
    std::getline(std::cin, accountHolder);

    std::cout << "Enter Initial Balance: $";
    std::cin >> initialBalance;

    BankAccount myAccount(accountID, accountPassword, accountHolder, initialBalance);

    std::string inputPassword;
    std::cout << "Enter Account Password for Verification: ";
    std::cin >> inputPassword;

    if (myAccount.verifyPassword(inputPassword)) {
        int choice;
        do {
            std::cout << "\nMenu:\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nEnter your choice (1-4): ";
            std::cin >> choice;

            switch (choice) {
                case 1:
                    double depositAmount;
                    std::cout << "Enter Deposit Amount: $";
                    std::cin >> depositAmount;
                    myAccount.deposit(depositAmount);
                    break;
                case 2:
                    double withdrawalAmount;
                    std::cout << "Enter Withdrawal Amount: $";
                    std::cin >> withdrawalAmount;
                    myAccount.withdraw(withdrawalAmount);
                    break;
                case 3:
                    myAccount.checkBalance();
                    break;
                case 4:
                    std::cout << "Exiting program." << std::endl;
                    break;
                default:
                    std::cout << "Invalid choice. Please enter a number between 1 and 4." << std::endl;
            }
        } while (choice != 4);
    } else {
        std::cout << "Password verification failed. Exiting program." << std::endl;
    }

    return 0;
}
