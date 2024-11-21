#include<iostream>
#include<vector>
using namespace std ;


// create the class
class Chai {
	public:
		string chaiName ;
		int servings ;
		vector<string> ingredients ;

		void display () {
			cout << "Ingredients are: "  ;
			for(string ingri : ingredients) {
				cout << ingri << " " ;
			}
			cout << endl ;
		}

		Chai() {
			cout << "Chai constructor called " << endl ;
		}


};
int main () {
	cout << "Hello World" << endl ;
	Chai chai1 ;
	chai1.chaiName = "Masala Chai" ;
	chai1.ingredients = {"Milk", "Tea", "Water"} ;
	chai1.servings = 2;

	chai1.display();

	return 0;
}