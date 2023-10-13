# Falcon C++ Bank Management System

This C++ project implements a simple Bank Management System using the Falcon C++ framework. The system includes features for customer management, account management, transaction management, and file operations.

## Features

1. **Customer Management**
   - Add new customers
   - Update customer details
   - Delete customer records

2. **Account Management**
   - Open new accounts
   - Close existing accounts
   - Update account details

3. **Transaction Management**
   - Deposit
   - Withdraw
   - View account balance
   - View transaction history

4. **File Operations**
   - Read data from text, Excel, or .dat files
   - Write data to text, Excel, or .dat files

## Classes and Methods

### Customer
- **Attributes:**
  - Name
  - Age
  - Address
  - Phone number
  - Customer ID

- **Methods:**
  - `getDetails`
  - `updateDetails`

### Account
- **Attributes:**
  - Account number
  - Balance
  - Type of account

- **Methods:**
  - `openAccount`
  - `closeAccount`
  - `updateAccount`

### Transaction
- **Attributes:**
  - Transaction ID
  - Account number
  - Amount
  - Transaction type
  - Datetime

- **Methods:**
  - `makeDeposit`
  - `makeWithdrawal`
  - `getTransactionHistory`

### FileHandler
- **Attributes:**
  - Filepath

- **Methods:**
  - `readFromFile`
  - `writeToFile`
  - `updateFile`
  - `deleteFromFile`

## Usage

Include instructions on how to build and run the project. You may also want to provide sample code snippets or usage examples.

```bash
# Build the project
$ make

# Run the executable
$ ./bank_management_system
