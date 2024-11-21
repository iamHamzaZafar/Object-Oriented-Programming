#include<iostream>
using namespace std ;

// if the class have pure virtual function then that class is called Abstract Class
// pure virtual Function is with no implementation = 0 
class Shape{
	// pure virtual function
	public:
	virtual void draw()=0 ;
	
	//non virtual function
	void info(){
		cout << "This is a shape " << endl ;
	}
	private:
		int data = 100 ;
	
		
};

// Derived Class Rectangle
class Rectangle:public Shape {
	public:
		void draw () override{
			cout << "This is REctangle Shape" << endl ;
		}
		
	
};

// Derived Class Square
class Square: public Shape{
	public:
		void draw() override{
			cout << "This is a square shape " << endl ;
		}
};

int main (){
	Shape* ptr ;
	Square s ;
	ptr = &s ;
	ptr->draw();
	return 0 ;
}