#include<iostream>
using namespace std ;


class Deep{
	public:
		int* data ;
		// constructor
		Deep(int value){
			data = new int(value) ;
			cout << "Parameter constructor called !" << endl ;
		}
		
		// Deep copy constructor
		Deep(Deep& obj) {
			data = new int (*obj.data) ;
			cout << "Copy constructor Called" << endl ;
		}
		
		// function to display the data 
		void display (){
			cout << "Data " << *data << endl  ; 
		}
		
		~Deep(){
			delete data; 
			cout << "Destructor Called" << endl ;
		}
};

int main (){
	Deep obj1(21) ;
	Deep obj2(obj1);
	
	obj1.display();
	obj2.display();
	
}