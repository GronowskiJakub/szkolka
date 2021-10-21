#include <iostream>
using namespace std;

class Book{
	public:
	
	string title, author;
	
	getTitle();
	getAuthor();
	
	Book(string pTitle, string pAuthor);

};

Book::getTitle(){
	cout<<"Tytu³: "<<title<<endl;
}

Book::getAuthor(){
	cout<<"Autor: "<<author<<endl;
}

Book::Book(string pTitle, string pAuthor){
	title=pTitle;
	author=pAuthor;
}


int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	Book Ksiazka1("Pan Tadeusz", "Adam Mickiewicz");
	Ksiazka1.getAuthor();
	Ksiazka1.getTitle();
	cout<<endl;
	
	Book Ksiazka2("Hobbit", "J.R.R. Tolkien");
	Ksiazka2.getAuthor();
	Ksiazka2.getTitle();
	cout<<endl;
	return 0;
}


