#include <iostream>
using namespace std;



	//definicja struktury
struct DataBirthday{
	//deklaracja pól struktury
	unsigned short int dd, mm , rrrr;
};

//definicja klasy
class Student{
	public:
//definicje w³aœciwoœci z ich inicjalizacj¹ zerow¹
		int id{};
		string name{}, surname{};
//deklaracja w³aœciwoœci typu strukurowego 
	DataBirthday dataBirthday{};
	
	void allShowData();
	
};

	void Student::allShowData(){
		cout  << "Id: " << id << "\nImiê i nazwisko: "
		<< name << " " << surname << "\nData Urodzenia: ";
		
	}




int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	
	Student uczen;
	
//	uczen.dataBirthday={11,2,2001};
	
	cout << "Podaj datê urodzenia: \n";
	cout << "Dzieñ: ";
	cin >> uczen.dataBirthday.dd;
	cout << "Miesi¹c: ";
	cin >> uczen.dataBirthday.mm;
	cout << "Rok: ";
	cin >> uczen.dataBirthday.rrrr;
	
	uczen.allShowData();
	cout << "Data urodzenia: " << uczen.dataBirthday.dd << "-"
		 << uczen.dataBirthday.mm << "-" << uczen.dataBirthday.rrrr;
	
	return 0;
}
