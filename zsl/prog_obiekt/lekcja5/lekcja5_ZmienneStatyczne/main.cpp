#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class school{
	public:
		static string s_school;
		static string s_jobPosition;
		
		string name;
		string surname;
		
		void getData();
		void setNameSurname(string name, string surname);
};

string school::s_school="CVD";
string school::s_jobPosition="student";

void school::getData(){
	cout<<"Imi? i Nazwisko: "<<name<<" "<<surname<<endl;
}

void school::setNameSurname(string name, string surname){
	school::name=name;
	school::surname=surname;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	cout<<school::s_school<<endl;
	cout<<school::s_jobPosition<<endl;
	
	school kowal;
	kowal.setNameSurname("Janusz", "Kowal");
	kowal.getData();
	school::s_jobPosition="wyk?adowca";
	cout<<endl<<school::s_jobPosition<<endl;
	kowal.s_jobPosition="Dziekan";
	cout<<endl<<school::s_jobPosition<<endl;
	
	return 0;
}
