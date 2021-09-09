#include <iostream>

using namespace std;


class Test{
	public:
	int a;
};

class Worker{
	public:
	string name;
	string surname;
	string nationality;
	unsigned short int year_birthday;
	float height;
	char gender;
	
	void showNameSurname(){
	cout<<"imie i nazwisko: "<<endl<<name<<" "<<surname<<endl;
    };
    //deklaracja (prototyp) metody showAllData
    void showAllData();
};

void Worker::showAllData(){
	string genderDescription;
	switch(gender){
	case 'm':
		genderDescription="Mê¿czyzna";
		break;
	case 'w':
		genderDescription="Kobieta";
		break;
	default:
		genderDescription="-";
}
	
	cout<<"imie i nazwisko: "<<endl<<name<<" "<<surname<<endl<<endl;
	cout<<"Narodowoœæ: "<<endl<<nationality<<endl<<endl;
	cout<<"Data urodzenia: "<<endl<<year_birthday<<endl<<endl;
	cout<<"Wzrost: "<<endl<<height<<endl<<endl;
	cout<<"P³eæ: "<<endl<<genderDescription<<endl<<endl;
	
/*	if(gender=="m"){
	gender="Mê¿czyzna";
	
	if(gender=="k"){
		gender="Kobieta"
	};
	else{
		gender="-"
	};*/
};



int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	//Test newObject;
	
	Worker pracownik;
	
	pracownik.name="Jan";
	pracownik.surname="Kowalski";
	pracownik.nationality="Polska";
	pracownik.year_birthday=1984;
	pracownik.height=179;
	pracownik.gender='m';
	

	
	//pracownik.showNameSurname();
	pracownik.showAllData();
	return 0;
}
