#include <iostream>
using namespace std;

class Worker {
	public:	
	string name;
	string surname;
	string nationality="Polska";
	
//definicja metody showName
	void showName(){
		cout <<"Twoje imi�: " << name;
	};
	void showAllData(){
		cout <<"imie i nazwisko: " << name + surname << nationality;
	};
// deklaracja metody showSuname
	void showSurname();
};
	void Worker::showSurname(){
		cout << "\nTest metody";
	};
	


int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish"); 
	
	Worker pracownik;
	pracownik.name="Krystyna";
	cout << "Narodowo��: " <<pracownik.nationality;
	pracownik.nationality="USA";
	cout << "\nNarodowo��: " << pracownik.nationality << endl;
	pracownik.showName();

	pracownik.showSurname();
	
	showAllData();
	return 0;
}
