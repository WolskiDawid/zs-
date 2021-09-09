#include <iostream>
using namespace std;

class Worker{
	public:
	 string name;
	 string surname;
	 string nationality="Polska";
	 
//definicja metody showName
	 void showName(){
	 	cout << "Twoje imiê: " << name << endl;
	 }; 
	 
//deklaracja metody (prototyp) metody showSurname
	void showSurname();
	
	void showAllData();
};

//definicja metody showSurname
	void Worker::showSurname(){
		cout << "Test metody showSurname" << endl;
	};
	
	void Worker::showAllData(){
		cout << "Imie i nazwisko: " << name << " " << surname << endl << "Narodowoœæ: " << nationality << endl;	
	};

int main(int argc, char** argv) 
{
	setlocale(LC_CTYPE, "polish");
	
	Worker pracownik;
	
	pracownik.name="Krystyna";
	pracownik.surname="Czubówna";
	
	cout << "Narodowoœæ: " << pracownik.nationality << endl;
	pracownik.nationality="USA";
	
	cout << "Narodowoœæ: " << pracownik.nationality << endl;
	pracownik.showName(); 
	pracownik.showSurname();
	pracownik.showAllData();
	
	return 0;
}
