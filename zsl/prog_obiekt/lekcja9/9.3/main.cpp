#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Animal{
 public:
 	static int s_count;
 	
 	Animal(){
 		s_count++;
 		cout<<"Iloœæ obiektów: "<<s_count<<endl;
	 }
	
	~Animal(){
		s_count--;
		cout<<"Iloœæ obiektów: "<<s_count<<endl;
	}
};

int Animal::s_count=0;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");

	cout<<"Iloœæ : "<<Animal::s_count<<endl;

	Animal dog;
//	delete dog; <---nie da sie
	Animal cat;
	
	cout<<"Iloœæ : "<<Animal::s_count<<endl;
	
	Animal *p_dog = new Animal();//wskaŸnik nie zostal usuniêty aby go usun¹æ nale¿y u¿yæ delete
	delete p_dog;//wskaŸnik zosta³ usuniêty
	
	return 0;
}


