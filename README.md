# BankingSystem
# Simple Banking System

This C++ program simulates a basic banking system where users can create accounts, perform deposits, withdrawals, check balances, and exit the program through a user-friendly console interface.

## Features

- **Account Creation:** Users can create a bank account by providing an account ID, password, account holder name, and initial balance.

- **Secure Authentication:** Passwords are securely verified before allowing users to access their accounts.

- **Deposit:** Users can deposit funds into their accounts with a specified deposit amount.

- **Withdrawal:** Users can withdraw funds from their accounts, provided they have sufficient balance.

- **Balance Inquiry:** Users can check their account balance at any time.

## Usage

1. **Build the Program:** Compile the C++ program using your preferred compiler.

    ```bash
    g++ -o banking_system banking_system.cpp
    ```

2. **Run the Program:** Execute the compiled program.

    ```bash
    ./banking_system
    ```

3. **Follow the On-Screen Instructions:** Enter the required information as prompted to create an account and perform banking operations.

4. **Exit the Program:** Choose the "Exit" option from the menu to exit the program.

## Sample Run

Here's an example of how the program works:

```bash
Enter Account ID: john_doe
Enter Account Password: secure123
Enter Account Holder Name: John Doe
Enter Initial Balance: $1000

Enter Account Password for Verification: secure123

Menu:
1. Deposit
2. Withdraw
3. Check Balance
4. Exit
Enter your choice (1-4): 1
Enter Deposit Amount: $500
Deposited $500 successfully. New balance: $1500

...

Exiting program.
