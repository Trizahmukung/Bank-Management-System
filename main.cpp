#include <iostream>
#include<iomanip>
#include <fstream>
#include<cctype>
#include<cstdlib>

using namespace std;

int choice,option3,account_number1,choice3,option1;

class Customer{
	int age,phoneNumber,customerID;
	char name[50],address[20];
	
	public:
		void customer();
		void getDetails();
		void updateDetails();	
			
};

void Customer::customer(){
		system("cls");
		cout<<"\t---Customer menu---\n";
		cout<<"\t 1.Get details \n";
		cout<<"\t 2.Update Customer Details \n";
		cout<<"Enter option: ";
		cin>>choice;
		if(choice==1){
			getDetails();
		}
		else if(choice==2)
		{
			updateDetails();
		}
		else{
			cout<<"invalid option!!"; 
		}
		
	}
void Customer:: getDetails(){
		system("cls");
	cout<<"\t Enter name: ";
	cin>>name;
	cout<<"\t Enter age: ";
	cin>>age;
	cout<<"\t Enter address: ";
	cin>>address;
	cout<<"\t Enter phoneNumber: ";
	cin>>phoneNumber;
	cout<<"\t Enter customerID: ";
	cin>>customerID;
	cout << endl;
	cout<<"\t Customer details created....:)";
	cout << endl;

}

void Customer:: updateDetails(){
	
}

class Account{
	int account_number,balance;
	char typeofAccount;

public:
		void openAccount();
		void updateAccount();
		void closeAccount();
		
    	void account(){
		system("cls");
		cout<<"\t---Account menu---\n";
		cout<<"\t 1.New account \n";
		cout<<"\t 2.Update Account  \n";
		cout<<"\t 3.Close Account  \n";
		cout<<"Enter option: ";
		cin>>choice;
		if(choice==1){
			openAccount();
		}
		else if(choice==2)
		{
			updateAccount();
		}
		else if (choice==3)
		{
		 	 closeAccount();	
		}
		else{
			cout<<"invalid option!!"; 
		}
		
	}
		
		
};
void Account:: openAccount(){
	system("cls");
	cout<<"\t Enter the account number: ";
	cin>>account_number;
	cout<<"\t Enter the account balance: ";
	cin>>balance;
	cout<<"\t Enter type of the account(C/S): ";
	cin>>typeofAccount;
	typeofAccount=toupper(typeofAccount);
	cout<<"\t Enter the initial amount (>=500 for Saving and >=1000 for current): ";
	cout << endl;
	cout<<"\t Account created....:)";
	cout << endl;

}
void Account::updateAccount(){
	system("cls");
		cout<<"Update balance: ";
		cin>>balance;
		cout<<"Change type of account: ";
		cin>>typeofAccount;

}
void Account::closeAccount(){	

}
class Transaction  {
	int account_number,transaction,amount,balance;
	string deposit,withdraw;
	
	public:
		int choice2;
	
	void transactiontype(){
		system("cls");
		cout<<"\t---Transactions Menu--- \n\n ";
		cout<<"\t 1.Deposit\n ";
		cout<<"\t 2.Withdraw\n";
		cout<<"\t 3.Transaction History\n";
		cout<<"\t 4.Exit\n ";
		cout<<"Enter choice: ";	
		cin>>choice2;
		if(choice2==1){
			makeDeposit();
		}
		else if(choice2==2){
			makeWithdrawal();
		}
		else if(choice2==3){
			getTransactionHistory();
		}
		else if(choice2==4){
			exit(0);
		}
	}
	void makeDeposit(){
		system("cls");
		cout<<"Enter Account number: ";
		cin>>account_number;
		cout<<"Enter amount to deposit : ";
		cin>>deposit;
		cout<<"\n----------------------\n";
		cout<<"\n New balance: "<<deposit;
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
	
	void makeWithdrawal(){
		system("cls");
		cout<<"Enter Account number: ";
		cin>>account_number;
		cout<<"\t\t\t---------------------------------------- \n";
		cout<<"\t\t\t account number: "<<account_number;
		cout<<"\n \t\t\t balance: "<<deposit;
		cout<<"\n \t\t\t------------------------------------- \n";
		
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
	void getTransactionHistory(){
		system("cls");
		cout<<"enter Account number: ";
		cin>>account_number1;
		if(account_number1==account_number){
				cout<<"\t\t\t---------------------------------------------- \n";
				cout<<"\t\t\t account number: "<<account_number;
				cout<<"\n \t\t\t balance: "<<balance;
				cout<<"\n \t\t\t------------------------------------------- \n";
			}
			cout<<"enter 1 to go to menu : ";
			cin>>choice3;
			if(choice3==1){
				transactiontype();
			}	
				
	}
	
};


int main(){
	
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
    
    if(option1==1){
		Customer first;
		first.customer();
	}
	else if(option1==2)
	{
		Account second;
		second.account();
	}
	else if(option1==3){
		Transaction third;
		third.transactiontype();
	}
	
	return 0;
	
}
