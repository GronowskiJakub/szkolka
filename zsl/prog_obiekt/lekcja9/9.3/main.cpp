#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Animal{
 public:
 	static int s_count;
 	
 	Animal(){
 		s_count++;
 		cout<<"Ilo�� obiekt�w: "<<s_count<<endl;
	 }
	
	~Animal(){
		s_count--;
		cout<<"Ilo�� obiekt�w: "<<s_count<<endl;
	}
};

int Animal::s_count=0;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");

	cout<<"Ilo�� : "<<Animal::s_count<<endl;

	Animal dog;
//	delete dog; <---nie da sie
	Animal cat;
	
	cout<<"Ilo�� : "<<Animal::s_count<<endl;
	
	Animal *p_dog = new Animal();//wska�nik nie zostal usuni�ty aby go usun�� nale�y u�y� delete
	delete p_dog;//wska�nik zosta� usuni�ty
	
	return 0;
}


