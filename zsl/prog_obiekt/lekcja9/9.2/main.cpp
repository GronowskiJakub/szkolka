#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Worker{
 public:
 	string name,surname;
 	
 	Worker();
 	Worker(string pName, string pSurname);
 	
 	~Worker(){ //destruktor to metoda wywo³ywana tu¿ przed zniszczeniem obiektu
 		cout<<"Definicja destruktora"<<endl;
	 }
 	
 	void getData();
 	void createObjectWorker();
 	
};

	Worker::Worker(){
		cout<<"Konstruktor domyœlny"<<endl<<endl;
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
		cout<<"Wywo³anie funkcji createObjectWorker"<<endl;
	}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	Worker nowak = Worker("Janusz","Nowak"); //Sposób jawny okreœlania konstruktora
	//Worker nowak("Janusz","Nowak"); <-- Sposób nie jawny okreœlania konstruktora
	nowak.getData();
	
	cout<<"WskaŸnik"<<endl;
	Worker *p_kowalski = new Worker("Jan","Kowalski");
	p_kowalski->getData();//wskaŸnik nie zostal usuniêty przez destruktora
	
	delete p_kowalski; //teraz zostal usuniêty
	
	createObjectWorker();
	
	return 0;
}

