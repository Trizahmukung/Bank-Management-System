#include <iostream>
#include<iomanip>
#include <fstream>
#include<cctype>
#include<cstdlib>

using namespace std;

class Bank_Account{
	int account_number;
	char name[50];
	char type;
	int Money_Deposit;
	
public:
		void create_account();
		void Display_Account();
		
};
void Bank_Account:: create_account(){
	system("cls");
	cout<<"\t Enter the account number: ";
	cin>>account_number;
	cout<<"\t Enter the name of the account holder: ";
	cin.ignore();
	cin.getline(name,50);
	cout<<"\t Enter type of the account(C/S): ";
	cin>>type;
	type=toupper(type);
	cout<<"\t Enter the initial amount (>=500 for Saving and >=1000 for current): ";
	cin>>Money_Deposit;
	cout << endl;
	cout<<"\t Account created....:)";
	cout << endl;

}
void Bank_Account:: Display_Account(){
cout << "\t Bank Account number: " << account_number << endl;
cout << "\t Account Holder Name: " << name << endl;
cout << "\t Type Of Account: " << type << endl;
cout << "\t Balance Amount: " << Money_Deposit << endl;

}

int main(){
	char ch;
	int num;
	
	  cout << "\t\t ..........................." << endl;
    cout << "\t\t | Bank Management System | " << endl;
    cout << "\t\t ..........................." << endl;

    cout << endl;
    cout << "\t ---Main Menu---" << endl;
    cout << "\t 1. Create Account" << endl;
    cout << "\t 2. Deposit Money" << endl;
    cout << "\t 3. Withdraw Money" << endl;
    cout << "\t 4. Balance Enquiry" << endl;
    cout << "\t 5. All Account Holder List" << endl;
    cout << "\t 6. Close An Account" << endl;
    cout << "\t 7. Modify An Account" << endl;
    cout << "\t 8. Exit" << endl;
    cout << endl;

    cout << "\t Enter Choice (1-8): ";
    cin >> ch;
    
	Bank_Account A;
	A.create_account();
	A.Display_Account();
	return 0;
	
}



