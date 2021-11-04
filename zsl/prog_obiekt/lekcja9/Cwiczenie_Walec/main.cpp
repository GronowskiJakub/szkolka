#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Roller{
	public:
	double height, radius;
	
	void getData();
	double getFormulas();
	Roller();
	Roller(double pHeight,double pRadius);

};

	void Roller::getData(){
		cout<<"Wysokoœæ: "<<height<<endl;
		cout<<"Promieñ: "<<radius<<endl;
	};
	
	double Roller::getFormulas()	{
		
		double Pb=M_PI*(radius*radius);
		double Ps=2*(M_PI*radius*height);
	
		cout<<"Pole podstawy walca: "<<Pb<<endl;
		cout<<"Pole powierzchni bocznej walca: "<<Ps<<endl;
		cout<<"Pole powierzchni ca³kowitej walca: "<<2*Pb+Ps<<endl;
		cout<<"Objêtoœæ walca: "<<Pb*height<<endl;
		};
		
	Roller::Roller(){};
	Roller::Roller(double pHeight,double pRadius){
		height=pHeight;
		radius=pRadius;
	};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	double r,h;
	cout<<"Podaj promieñ: ";
	cin>>r;
	cout<<endl<<"Podak wyskokoœæ: ";
	cin>>h;
	cout<<endl;
	
	Roller walec(r,h);
	walec.getData();
	walec.getFormulas();
	
	return 0;
}
