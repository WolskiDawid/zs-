#include <iostream>
using namespace std;



	//definicja struktury
struct DataBirthday{
	//deklaracja p�l struktury
	unsigned short int dd, mm , rrrr;
};

//definicja klasy
class Student{
	public:
//definicje w�a�ciwo�ci z ich inicjalizacj� zerow�
		int id{};
		string name{}, surname{};
//deklaracja w�a�ciwo�ci typu strukurowego 
	DataBirthday dataBirthday{};
	
	void allShowData();
	
};

	void Student::allShowData(){
		cout  << "Id: " << id << "\nImi� i nazwisko: "
		<< name << " " << surname << "\nData Urodzenia: ";
		
	}




int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	
	Student uczen;
	
//	uczen.dataBirthday={11,2,2001};
	
	cout << "Podaj dat� urodzenia: \n";
	cout << "Dzie�: ";
	cin >> uczen.dataBirthday.dd;
	cout << "Miesi�c: ";
	cin >> uczen.dataBirthday.mm;
	cout << "Rok: ";
	cin >> uczen.dataBirthday.rrrr;
	
	uczen.allShowData();
	cout << "Data urodzenia: " << uczen.dataBirthday.dd << "-"
		 << uczen.dataBirthday.mm << "-" << uczen.dataBirthday.rrrr;
	
	return 0;
}
