#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class Student {
	public:
		static string s_class;
		static string s_job;
		string name;
		string surname; 
		
		void getData();
		void setNameSurname(string name, string surname);
		
		static string s_getClass();
		static string s_getJob();
};

string Student::s_class="2pT";
string Student::s_job="Programista";

void Student::getData(){
	cout<<"Imie i nazwisko: "<<name<<" "<<surname<<endl;
}

void Student::setNameSurname(string name, string surname){
	Student::name=name;
	Student::surname=surname;
}

string Student::s_getClass(){
	return s_class;
}
string Student::s_getJob(){
	return s_job;
}



int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	Student gronek;
	gronek.setNameSurname("Jakub", "Gronowski");
	gronek.getData();
	gronek.s_getClass();
	gronek.s_getJob();
	
	return 0;
}
