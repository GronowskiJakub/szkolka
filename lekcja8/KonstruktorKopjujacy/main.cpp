#include <iostream>
using namespace std;

class Retangle{
	private:
		double sideA;
		double sideB;
	
	public:
		Retangle();
		Retangle(double pSideA, double pSideB);
		Retangle(const Retangle &);
		
		void catchSides(double &, double &);
		void setSides(double, double);
		double area();
		double circuit();
};

	Retangle::Retangle(){
		cout<<"Konstruktor domyœlny"<<endl;
	};
	
	Retangle::Retangle(double pSideA, double pSideB){
		sideA=pSideA;
		sideB=pSideB;
		cout<<"Konstruktor parametryczny"<<endl;
	};
	
	Retangle::Retangle(const Retangle &model){
		sideA=model.sideA;
		sideB=model.sideB;
		cout<<"Konstruktor kopjuj¹cy"<<endl;
	};
	
	
		
	void Retangle::catchSides(double &pSideA, double &pSideB){
		pSideA=sideA;
		pSideB=sideB;
	};
	
	void Retangle::setSides(double pSideA, double pSideB){
		sideA=pSideA;
		sideB=pSideB;
	};
	
	double Retangle::area(){
		return sideA*sideB;
	};
	
	double Retangle::circuit(){
		return 2*sideA+2*sideB;
	};
	
	Retangle copyRetangle(Retangle retangle){
		return retangle;
	};
	

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	double a=10, b=2;
	
	cout<<"Pierwszy prostok¹t"<<endl;
	Retangle prostokat1(2, 4);
	prostokat1.catchSides(a, b);
	cout<<"Bok a: "<<a<<endl<<"Bok b: "<<b<<endl<<endl;
	
	cout<<"Drugi prostok¹t"<<endl;
	Retangle prostokat2=prostokat1;//tworzymy prostokat2 na podstawie prostokat1 w sposob nie jawny
	prostokat2.catchSides(a, b);
	cout<<"Bok a: "<<a<<endl<<"Bok b: "<<b<<endl<<endl;
	
	cout<<"Trzeci prostok¹t"<<endl;
	Retangle prostokat3(prostokat1);//tworzymy prostokat3 na podstawie prostokat1 w sposob jawny
	prostokat3.catchSides(a, b);
	cout<<"Bok a: "<<a<<endl<<"Bok b: "<<b<<endl<<endl;
	
	cout<<"Czwarty prostok¹t"<<endl;
	Retangle prostokat4;
	prostokat4=copyRetangle(prostokat1);
	prostokat4.catchSides(a, b);
	cout<<"Bok a: "<<a<<endl<<"Bok b: "<<b<<endl<<endl;

	
	return 0;
}
