#include<iostream>
using namespace std ;

// friend function can have access to the private and protected method of the other classes.

class Base{
	protected:
		int data = 100 ;
	private:
		string name = "Hamza" ;
	public :
		friend void friendFunction (Base& obj) ;
};

void friendFunction(Base& obj){
	cout << obj.data << " ," << obj.name ;
}

 int main(){
 	cout << "Hello World" << endl ;
 	Base obj ;
 	friendFunction(obj) ;
 	return 0 ;
 }