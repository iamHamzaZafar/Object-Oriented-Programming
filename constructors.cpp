#include <iostream>
using namespace std ;
class Car {
	public:
		string carCompany ;
		int carModel ;
		string carName ;
		// default constructor
		Car() {
			cout << "Default constructor called " << endl ;
		}
		// parameter Constructor
		Car(string name, int modelYear, string company) {
			carCompany = company;
			carModel = modelYear ;
			carName = name ;
			cout << "Parameter Constructor Called " << endl ;
		}
		// copy constructor take referance to the object of the same class in arguments 
		Car(Car& c){
				carModel = c.carModel ;
				carName = c.carName ;
				carCompany = c.carCompany ;
				cout << "Copy constructor called " << endl ;
		}
		
		//display data
		void display () {
			cout << carName <<  " " << carCompany << " " << carModel << endl ;
		}

};
int main() {

	Car car1("City", 2017, "Honda") ;
	Car car2 ;
	Car car3(car1) ;
	car1.carCompany = "Toyota";
	car1.display();
	car3.display() ;
	return 0 ;
}