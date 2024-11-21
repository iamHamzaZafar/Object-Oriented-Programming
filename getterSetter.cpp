#include<iostream>
using namespace std ;
class BankAccount {
	private:
		double accountBalance  ;
		int accountNumber ;
	public:

		BankAccount(int acNumber, double bal) {
			accountBalance = bal ;
			accountNumber = acNumber ;
			cout << "Constructor Called " << endl ;
		}
		int getAccountNumber() {
			return accountNumber ;
		}
		
		void setAccountBalance(int amount){
			accountBalance += amount ;
			cout << "Deposited Amount " << amount << endl; 
		}

		double getAccountBalance() {
			return accountBalance ;
		}
};
int main () {
	BankAccount ac1(123,500.0) ;
	cout << 	ac1.getAccountNumber() << endl ;
	cout << 	ac1.getAccountBalance() << endl ;
	ac1.setAccountBalance(736478632) ;
	cout << ac1.getAccountBalance();
	
	
	return 0 ;
}