#include<iostream>
using namespace std ;


class Shallow{
	public:
		int* data ;
	// constructor
	Shallow(int value){
		data = new int(value) ;
		cout << "Constructor called\n";
	}
	
//	shallow copy constructor
	Shallow(const Shallow& obj){
		data = obj.data ;// copy the pointer
		cout << "Shallow copy constructor called " << endl ;
	}
	
	// function to display the data
	 void display() {
        cout << "Data: " << *data << endl;
    }
	  // Destructor
    ~Shallow() {
        delete data; // Free allocated memory
        cout << "Destructor called\n";
    }
};
int main (){
	Shallow obj1(43) ;
	obj1.display();
	Shallow obj2(obj1) ;
	obj2.display();
	*(obj1.data) = 34 ;
	obj1.display();
	return 0 ;
}