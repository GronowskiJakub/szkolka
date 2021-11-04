#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Worker{
 public:
 	string name,surname;
 	
 	Worker();
 	Worker(string pName, string pSurname);
 	
 	~Worker(){ //destruktor to metoda wywo�ywana tu� przed zniszczeniem obiektu
 		cout<<"Definicja destruktora"<<endl;
	 }
 	
 	void getData();
 	void createObjectWorker();
 	
};

	Worker::Worker(){
		cout<<"Konstruktor domy�lny"<<endl<<endl;
	};
	
	Worker::Worker(string pName, string pSurname):
		name{pName},
		surname{pSurname}
	{
		cout<<"Konstruktor parametryczny"<<endl<<endl;
	};
	
	void Worker::getData(){
		cout<<"Imie: "<<name<<endl<<"Nazwisko: "<<surname<<endl<<endl;
	};
	
	void Worker::createObjectWorker(){
		Worker worker;
		worker.getData();
		cout<<"Wywo�anie funkcji createObjectWorker"<<endl;
	}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	Worker nowak = Worker("Janusz","Nowak"); //Spos�b jawny okre�lania konstruktora
	//Worker nowak("Janusz","Nowak"); <-- Spos�b nie jawny okre�lania konstruktora
	nowak.getData();
	
	cout<<"Wska�nik"<<endl;
	Worker *p_kowalski = new Worker("Jan","Kowalski");
	p_kowalski->getData();//wska�nik nie zostal usuni�ty przez destruktora
	
	delete p_kowalski; //teraz zostal usuni�ty
	
	createObjectWorker();
	
	return 0;
}

