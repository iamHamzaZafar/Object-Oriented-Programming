#include<iostream>
using namespace std ;

class Base{
	protected:
		int data = 200;
	private:
		int val = 100 ;
	public:
		friend class Fri ;
		
};


// another class
class Fri {
	public :
		void display(Base& obj){
			cout << "Total: "<< obj.data + obj.val ;
		}
		
};
int main(){
	Base obj ;
	Fri f ;
	f.display(obj) ;
	return 0 ;
}