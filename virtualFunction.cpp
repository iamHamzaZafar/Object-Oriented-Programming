#include<iostream>
using namespace std ;
// base class
class Base{
	public:
		int data ;
		virtual void print (){
			cout << "Hello world :" << endl ;
		}
};

// derived class
class Derived : public Base{
	void print  () override  {
		cout << "Hello from the base class" << endl ;
	}
};
int main(){
	Base* basePtr;
	Derived d ;
	
	basePtr = &d;
	basePtr->print();
	return 0 ;
}