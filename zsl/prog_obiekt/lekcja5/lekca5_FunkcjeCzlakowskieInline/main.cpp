#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class Rectangle{
	public:
		float sideA;
		float sideB;
	//funkcja inline jest szybsza ale zajmuje wiecej pamieci
		inline float inline_area(float sideA, float sideB){
			return sideA * sideB;
		}
		
		inline float inline_circuit(float sideA, float sideB){
			return sideA*2 + sideB*2;
		}
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	Rectangle prostokat;
	cout<<"Pole prostokata wynosi: "<<prostokat.inline_area(2, 4)<<"cm^2"<<endl;
	cout<<"Obwod prostokata wynosi: "<<prostokat.inline_circuit(2, 4)<<"cm"<<endl;
		
	return 0;
}
