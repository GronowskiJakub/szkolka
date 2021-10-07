#include <iostream>

//utworz klase o nazwie Samochod 
//Dodaj nastepujace zmienne instancyjne: marka, model, rocznik
//Dodaj zmienne klasowe: ilosc_kol
//Dodaj prototypy wyswietlajace: wszystkie wlasciwosci(getData), ustawiajace wszyskie wlasciwoci(setData), Wysietlajace ile lat ma samochod(carYears)

using namespace std;


class Samochod{
	public:
	string marka;
	string model;
	int rocznik;
	int rok;
	
	static int s_iloscKol;
	
	void getData();
	void setData(string marka, string model, int rocznik);
	int carYears();
};

int Samochod::s_iloscKol=4;

void Samochod::getData(){
	cout<<"Marka: "<<marka<<endl<<"Model: "<<model<<endl<<"Rocznik: "<<rocznik<<endl;
}


void Samochod::setData(string marka, string model, int rocznik){
	Samochod::marka=marka;
	Samochod::model=model;
	Samochod::rocznik=rocznik;
}
int Samochod::carYears(){
	cout<<"Wiek samochodu: "<<rok-rocznik<<endl;
}

int main(int argc, char** argv) {
	
	Samochod car;
	
	car.setData("Opel", "Mokka", 2015);
	car.getData();
	cout<<"Ilosc kol: "<<Samochod::s_iloscKol<<endl;
	cout<<"Podaj aktualny rok: ";
	cin>>car.rok;
	cout<<endl;
	car.carYears(); 
	
	return 0;
}
