#include <iostream>
using namespace std;
 
class Car{
	public: 
		unsigned int id;
		string brand;
		string model;
	
 
		void getData();
		
		Car();
		
		Car(unsigned int id, string brand, string model);
 
};
 
void Car::getData(){
	cout<<"ID: "<<id<<"\nMarka: "<<brand<<"\nModel: "<<model<<endl<<endl; 
}

Car::Car():
	id{0},
	brand{"Marka domyœlna"},
	model{"Model domyœlny"}
{
cout<<"Konstruktor domyœlny";
}	

		
Car::Car(unsigned int pId, string pBrand, string pModel):
	id {pId}, 
	brand {pBrand}, 
	model {pModel}
{
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
 
	Car fiat;
	fiat.getData();	
	
	Car fiat1(8, "Fiat", "Punto");
	fiat1.getData();
	
	return 0;
}
