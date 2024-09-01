
# Bank Management System Using C & C++

## Overview

This project implements a basic banking system in C++ with functionalities for opening an account, depositing money, withdrawing money, and displaying account details. The system allows users to interact with their bank account through a simple command-line interface.

## Features

- **Open Account**: Create a new account with user details and initial deposit.
- **Deposit Money**: Add money to the account balance.
- **Withdraw Money**: Withdraw money from the account balance.
- **Display Account**: View account details including balance and personal information.

## File Structure

- `bank.h`: Header file containing the class definition for the `bank` class.
- `bank.cpp`: Implementation of the `bank` class methods.
- `main.cpp`: Contains the main function and user interaction logic.

## Code Explanation

### `bank` Class

#### Attributes

- `name`: Stores the account holder's name.
- `address`: Stores the account holder's address.
- `y`: Stores the type of account ('s' for saving and 'c' for current).
- `balance`: Stores the current balance of the account.

#### Methods

- **`Open_account()`**: 
  - Prompts the user for their name, address, account type, and initial deposit.
  - Initializes account details and displays a confirmation message.

- **`Deposit_Money()`**:
  - Prompts the user for an amount to deposit.
  - Updates and displays the new balance.

- **`Withdraw_Money()`**:
  - Prompts the user for an amount to withdraw.
  - Updates and displays the new balance.

- **`Display_Account()`**:
  - Displays the account holder's name, address, account type, and balance.

### `main()` Function

- **`int ch`**: Stores the user’s choice of operation.
- **`char x`**: Stores the user’s choice to continue or exit the program.
- **`bank obj`**: Creates an instance of the `bank` class.

**Main Loop:**

- Displays a menu with options to open an account, deposit money, withdraw money, display account details, or exit.
- Based on user choice (`ch`), it calls the corresponding method from the `bank` class.
  - `Case 1`: Calls `Open_account()` to create a new account.
  - `Case 2`: Calls `Deposit_Money()` to deposit money.
  - `Case 3`: Calls `Withdraw_Money()` to withdraw money.
  - `Case 4`: Calls `Display_Account()` to display account details.
  - `Case 5`: Exits the program.
- Prompts the user to continue or exit using `x = getch()`.

## Potential Improvements

- **Error Handling**: Add validations to ensure inputs are correct (e.g., non-negative balances, sufficient funds for withdrawals).
- **Account Validation**: Implement checks to ensure only valid operations are performed.
- **Additional Features**: Include features like account updates and closure.

