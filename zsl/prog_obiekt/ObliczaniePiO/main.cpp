#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class Data{
	
	public:
		float a;
		float b;
	


float showField(float a, float b);
void showField();	

float showPerimeter(float a, float b);
void showPerimeter();
};


float Data::showField(float a, float b){
	return a*b;
}


int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	Data prostokat;
	
	prostokat.a=2;
	prostokat.b=2;
	
	prostokat.showField();
	return 0;
}
