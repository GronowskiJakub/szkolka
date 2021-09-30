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
		
		static string s_getSchool();
		static void s_setSchool(string pschool){
			s_school=pschool;
		}
		
};

string school::s_school="CVD";
string school::s_jobPosition="student";

void school::getData(){
	cout<<"Imiê i Nazwisko: "<<name<<" "<<surname<<endl;
}

void school::setNameSurname(string name, string surname){
	school::name=name;
	school::surname=surname;
}

string school::s_getSchool(){
	return s_school;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	cout<<school::s_school<<endl;
	cout<<school::s_jobPosition<<endl;
	
	school kowal;
	kowal.setNameSurname("Janusz", "Kowal");
	kowal.getData();
	school::s_jobPosition="wyk³adowca";
	cout<<endl<<school::s_jobPosition<<endl;
	kowal.s_jobPosition="Dziekan";
	cout<<endl<<school::s_jobPosition<<endl;
	
	cout<<school::s_getSchool()<<endl;
	school::s_setSchool("WSB");
	cout<<school::s_getSchool()<<endl;
	
	return 0;
}
