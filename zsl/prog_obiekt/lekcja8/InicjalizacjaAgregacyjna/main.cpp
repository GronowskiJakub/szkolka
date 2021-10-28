#include <iostream>
using namespace std;
 
class Car{
	public: 
		unsigned int id;
		string brand;
		string model;
	
 
		void getData();
 
};
 
void Car::getData(){
	cout<<"ID: "<<id<<"\nMarka: "<<brand<<"\nModel: "<<model<<endl<<endl; 
}


int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
 
	Car fiat {10};
	fiat.getData();	
	
	Car fiat1 {10, "Fiat"};
	fiat1.getData();
	
	Car fiat2 {10, "Fiat", "126p"};
	fiat2.getData();
	
	return 0;
}
