#include <iostream>
using namespace std;
 
struct Date {
	int dd, mm, yyyy;
};
 
class Car{
	public: 
		unsigned int id=10;
		string brand="testowa marka", model="testowy model", color;
		unsigned short int power;
		float price;
		Date dateOfProduction;
 
		void getData();
		
 		Car();
		Car(unsigned int id, string brand);
		Car(unsigned int id, string brand, string model, string color, unsigned short int power, float price, Date dateOfProduction);
 
 
};
 
void Car::getData(){
	cout<<"Marka: "<<brand<<"\nModel: "<<model<<"\nKolor: "<<color
			<<"\nMoc: "<<power<<"KM\n"<<"Cena: "<<price
			<<"\nRok produkcji: "<<dateOfProduction.yyyy<<endl
			<<"Identyfikator: "<<id<<endl<<endl;
}


Car::Car(){
	id=0;
	brand="MARKA";
	model="MODEL";
	color="KOLOR DOMYŒLNY";
	power=0;
	price=0;
	dateOfProduction={0,0,0};
	cout<<"KONSTRUKTOR DOMYSLNY\n";	
}

Car::Car(unsigned int pId, string pBrand){
	id=pId;
	brand=pBrand;
}

Car::Car(unsigned int pId, string pBrand, string pModel, string pColor, unsigned short int pPower, float pPrice, Date pDateOfProduction){
	id=pId;
	brand=pBrand;
	model=pModel;
	color=pColor;
	power=pPower;
	price=pPrice;
	dateOfProduction=pDateOfProduction;
}
 
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
 
	Car fiat;
	fiat.getData();
	
	Car fiat1(10,"Fiat");
	fiat1.getData();
	
	Car fiat2(10,"Fiat","Panda","Czerwona",100,25000.99,{1,10,2000});
	fiat2.getData();
 
	
	
	return 0;
}
