#include <iostream>
using namespace std;

//deklaracja struktury
struct DateBirthday{
//deklaracja pol struktury
	unsigned short int dd, mm, yyyy;
};

//definicja klasy
class Student{
	public:
//definicje w³aœciwoœci z ich inicjalizacj¹ zerow¹
	int id {};
	string name{}, surname{};
//deklaracja wlaœciwoœci typu strukturowego
	DateBirthday dateBirthday{};
	void showAllData();
	void setData(int id, string name, string surname, DateBirthday dateBirthday);
};

	void Student::showAllData(){
		cout<<"ID: " << id << "\nImiê i nazwisko: "
			<< name << " " << surname << endl
			<< "Data urodzenia: " << dateBirthday.dd << "-"
			<< dateBirthday.mm << "-"
			<< dateBirthday.yyyy << "r.";
	}

	void Student::setData(int id, string name, string surname, DateBirthday dateBirthday){
        Student::id=id;
        Student::name=name;
        Student::surname=surname;
        Student::dateBirthday=dateBirthday;
	};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Student uczen;

	unsigned short int dd, mm, yyyy;
	cout << "podaj datê urodzenie: \n";
	cout << "Dzieñ: ";
	cin >> dd;
	cout << "Miesi¹c: ";
	cin >> mm;
	cout << "Rok: ";
	cin >> yyyy;

	uczen.setData(13, "Janusz", "Walczuk", {dd,mm, yyyy});

	uczen.showAllData();

	return 0;
}
