#include<iostream>
using namespace std ;
class BankAccount{
	public:
		int* data ;
		BankAccount(){
			cout << "default constructor called " << endl ;
		}
		BankAccount(int value ){
			data = new int(value) ;
		}
		~BankAccount(){
			cout << data << endl ;
			cout << "destructor Called" << endl ;
			delete data ;
		}
	};
int main (){
	BankAccount ac1(5) ;
	cout << *(ac1.data) ;
	return 0 ;
}