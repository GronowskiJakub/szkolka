#include <iostream>
using namespace std;

struct Date{
	unsigned short int dd, mm, yyyy; 
};

class Car{
	public:
	unsigned int id;
	string brand="Nieznana", model, color;
	unsigned short int power;
	float price;
	Date dateOfProduction;
	
	getData();
	
	Car(int pId){
		id=pId;
	};
	
	Car(int, string);
	
	Car(unsigned int pId, string pBrand, string pModel, string pColor, unsigned short int pPower, float pPrice, Date pDateOfProduction);
};

Car::getData(){
	cout<<"Identyfikator: "<<id<<endl
		<<"Marka: "<<brand<<endl
		<<"Model: "<<model<<endl
		<<"Kolor: "<<color<<endl
		<<"Moc: "<<power<<"KM"<<endl
		<<"Cena: "<<price<<"PLN"<<endl
		<<"Rocznik: "<<dateOfProduction.yyyy<<endl;
}

Car::Car(int pId, string pBrand){
	id=pId;
	brand=pBrand;
};

Car::Car(unsigned int pId, string pBrand, string pModel, string pColor, unsigned short int pPower, float pPrice, Date pDateOfProduction){
	id=pId;
	brand=pBrand;
	model=pModel;
	color=pColor;
	power=pPower;
	price=pPrice;
	dateOfProduction=pDateOfProduction;
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	Car opel(10);
	opel.getData();
	cout<<endl;
	
	Car fiat(11, "fiat");
	fiat.getData();
	cout<<endl;
	
	Car porsche(8, "porsche", "panamera", "czarny", 500, 1500000, {1,10,2021});
	porsche.getData();
	cout<<endl;
	
	return 0;
}
