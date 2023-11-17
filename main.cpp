//Banking Management System
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

// Declaring variables
int option3, account_number1, choice3, option1;

// Customer class declaration
class Customer {
    int age, phoneNumber, customerID, choice;
    char name[100], address[20];

public:
    void customer();
    void getDetails();
    void updateDetails();
    void saveToFile();
    void readFromFile();
};

// Customer class member function definitions
void Customer::customer() {
    // Display customer menu
    system("cls");
    cout << "\t---Customer menu---\n";
    cout << "\t 1.Get details \n";
    cout << "\t 2.Update Customer Details \n";
    cout << "\t 3.Main Menu\n";
    cout << "Enter option: ";
    cin >> choice;
    if (choice == 1) {
        getDetails();
    }
	 else if (choice == 2) {
        updateDetails();
	}
	 else if (choice == 3) {
       customer();
	}
	
    else {
        cout << "Invalid option!!";
    }
}

void Customer::getDetails() {
    // Get customer details
    system("cls");
    cout << "\t Enter name: ";
    cin >> name;
    cout << "\t Enter age: ";
    cin >> age;
    cout << "\t Enter address: ";
    cin >> address;
    cout << "\t Enter phoneNumber: ";
    cin >> phoneNumber;
    cout << "\t Enter customerID: ";
    cin >> customerID;
    cout << endl;
    cout<< "Customer Menu press 0:";
    cin>>choice;
    if(choice==0 ){
		customer();
	}
}

void Customer::updateDetails() {
    // Update customer details
    system("cls");
    cout << "Update age: ";
    cin >> age;
    cout << "Update address: ";
    cin >> address;
    cout << "Update phoneNumber: ";
    cin >> phoneNumber;
    cout << "Details updated successfully!" << endl;
    cout<< "Customer Menu press 0:";
    cin>>choice;
    if(choice==0 ){
		customer();
	}
}

void Customer::saveToFile() {
  // Save customer details to file
   ofstream outputFile("customer_details.txt", ios::app);
   outputFile << name << " " << age << " " << address << " " << phoneNumber << " " << customerID << endl;
   outputFile.close();
}

void Customer::readFromFile() {
    // Read customer details from file
    ifstream inputFile("customer_details.txt");
    if (!inputFile.is_open()) {
        cout << "Error opening customer_details.txt file!" << endl;
        return;
    }

    while (inputFile >> name >> age >> address >> phoneNumber >> customerID) {
        // Process the read data as needed
        // For example, you can display the data or store it in a vector
        cout << "Name: " << name << ", Age: " << age << ", Address: " << address << ", Phone: " << phoneNumber << ", ID: " << customerID << endl;
    }

    inputFile.close();
}

// Account class declaration, inheriting from Customer
class Account : public Customer {
    int account_number, balance, choice;
    char typeofAccount;

public:
    void openAccount();
    void updateAccount();
    void closeAccount();
    void saveToFile();
    void account();
    void readFromFile();
};

// Account class member function definitions
void Account::openAccount() {
    // Get account details
    system("cls");
    cout << "\t Enter the account number: ";
    cin >> account_number;
    cout << "\t Enter the account balance: ";
    cin >> balance;
    cout << "\t Enter type of the account(C/S): ";
    cin >> typeofAccount;
    typeofAccount = toupper(typeofAccount);
    cout << "\t Enter the initial amount (>=500 for Saving and >=1000 for current): ";
    cout << endl;
     cout<< "Account Menu press 0:";
    cin>>choice;
    if(choice==0 ){
		account();
	}
}

void Account::updateAccount() {
    // Update account details
    system("cls");
    cout << "Update balance: ";
    cin >> balance;
    cout << "Change type of account: ";
    cin >> typeofAccount;
    cout << endl;
     cout<< "Account Menu press 0:";
    cin>>choice;
    if(choice==0 ){
		account();
	}
}

void Account::closeAccount() {
    // Account closed
}

void Account::account() {
    // Display account menu
    system("cls");
    cout << "\t---Account menu---\n";
    cout << "\t 1.New account \n";
    cout << "\t 2.Update Account  \n";
    cout << "\t 3.Close Account  \n";
    cout << "Enter option: ";
    cin >> choice;
    if (choice == 1) {
        openAccount();
    } else if (choice == 2) {
        updateAccount();
    } else if (choice == 3) {
        closeAccount();
    } else {
        cout << "Invalid option!!";
    }
}

void Account::saveToFile() {
    // Save account details to file
    ofstream outputFile("account_details.txt", ios::app);
    outputFile << account_number << " " << balance << " " << typeofAccount << endl;
    outputFile.close();
}

void Account::readFromFile() {
    // Read account details from file
    ifstream inputFile("account_details.txt");
    if (!inputFile.is_open()) {
        cout << "Error opening account_details.txt file!" << endl;
        return;
    }

    while (inputFile >> account_number >> balance >> typeofAccount) {
        // Process the read data as needed
        // For example, you can display the data or store it in a vector
        cout << "Account Number: " << account_number << ", Balance: " << balance << ", Type: " << typeofAccount << endl;
    }

    inputFile.close();
}

// Transaction class declaration, inheriting from Account
class Transaction : public Account {
    int account_number, transaction, amount, balance;
    string deposit, withdraw;

public:
    int choice2;
    void transactiontype();
    void makeDeposit();
    void makeWithdrawal();
    void getTransactionHistory();
    void readFromFile();
    
};

// Transaction class member function definitions
void Transaction::transactiontype() {
    // Display transaction menu
    system("cls");
    cout << "\t---Transactions Menu--- \n\n ";
    cout << "\t 1.Deposit\n ";
    cout << "\t 2.Withdraw\n";
    cout << "\t 3.Transaction History\n";
    cout << "\t 4.Exit\n ";
    cout << "Enter choice: ";
    cin >> choice2;
    if (choice2 == 1) {
        makeDeposit();
    } else if (choice2 == 2) {
        makeWithdrawal();
    } else if (choice2 == 3) {
        getTransactionHistory();
    } else if (choice2 == 4) {
        exit(0);
    }
}

void Transaction::makeDeposit() {
    // Make a deposit
    system("cls");
    cout << "Enter Account number: ";
    cin >> account_number;
    cout << "Enter amount to deposit : ";
    cin >> deposit;
    cout << "\n----------------------\n";
    cout << "\n New balance: " << deposit;
    cout << "\n 1.exit: ";
    cout << "\n 2.Transaction menu: ";

    cin >> option3;
    if (option3 == 1) {
        exit(0);
    } else if (option3 == 2) {
        transactiontype();
    } else {
        cout << "Invalid option !! ";
    }
}

void Transaction::makeWithdrawal() {
	
	
    system("cls");
    cout << "Enter Account number: ";
    cin >> account_number;
    cout << "\t\t\t---------------------------------------- \n";
    cout << "\t\t\t account number: " << account_number;
    cout << "\n \t\t\t balance: " << deposit;
    cout << "\n \t\t\t------------------------------------- \n";

    cout<<"\n Enter Amount to withdraw: ";
		cin>>withdraw;
		// balance = deposit-withdraw;
		system("cls");
		cout<<"\n\n\n Succefully withdrawn:  "<<withdraw;
		cout<<"\n Remaining balance : "<<balance;
		cout<<"\n 1.exit: ";
		cout<<"\n 2.Go back to menu: ";
		cin>>option3;
if(option3==1){
			exit(0);
		}
		else if(option3==2){
			transactiontype();
		}
		else
		{
			cout<<"Invalid option !! ";
		}	
		
	}

void Transaction::getTransactionHistory() {
    // Get transaction history
    system("cls");
    cout << "enter Account number: ";
    cin >> account_number1;
    if (account_number1 == account_number) {
        cout << "\t\t\t---------------------------------------------- \n";
        cout << "\t\t\t account number: " << account_number;
        cout << "\n \t\t\t balance: " << balance;
        cout << "\n \t\t\t------------------------------------------- \n";
    }
    cout << "enter 1 to go to menu : ";
    cin >> choice3;
    if (choice3 == 1) {
        transactiontype();
    }
}

    
     void Transaction ::readFromFile(){
    // Read transaction details from file
    ifstream inputFile("transaction_details.txt");
    if (!inputFile.is_open()) {
        cout << "Error opening transaction_details.txt file!" << endl;
        return;
    }

    while (inputFile >> account_number >> transaction >> amount >> balance >> deposit >> withdraw) {
        // Process the read data as needed
        // For example, you can display the data or store it in a vector
        cout << "Account Number: " << account_number << ", Transaction: " << transaction << ", Amount: " << amount
             << ", Balance: " << balance << ", Deposit: " << deposit << ", Withdraw: " << withdraw << endl;
    }

    inputFile.close();
}


// Function to display the main menu
void showMainMenu() {
    cout << "\t\t ..........................." << endl;
    cout << "\t\t | Bank Management System | " << endl;
    cout << "\t\t ..........................." << endl;

    cout << endl;
    cout << "\t ---Main Menu---" << endl;
    cout << "\t 1. Customer Menu " << endl;
    cout << "\t 2. Account Menu" << endl;
    cout << "\t 3. Transaction Menu" << endl;
    cout << "\t 4. Exit" << endl;
    cout << endl;

    cout << "\t Enter Choice (1-4): ";
    cin >> option1;

    if (option1 == 1) {
        Customer first;
        first.customer();
    } else if (option1 == 2) {
        Account second;
        second.account();
    } else if (option1 == 3) {
        Transaction third;
        third.transactiontype();
    }
    
 
}

// Main function
int main() {
    // Create Customer and Account objects, and read data from files
    Customer first;
    first.readFromFile(); // Read and display customer details from file

    Account second;
    second.readFromFile(); // Read and display account details from file
    
	Transaction third;
    third.readFromFile(); // Read and display account details from file
	
    // Show the main menu
    showMainMenu();
    return 0;
}
