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
//definicje w�a�ciwo�ci z ich inicjalizacj� zerow�
	int id {};
	string name{}, surname{};
//deklaracja wla�ciwo�ci typu strukturowego
	DateBirthday dateBirthday{};
	void showAllData();
	void setData(int id, string name, string surname, DateBirthday dateBirthday);
};

	void Student::showAllData(){
		cout<<"ID: " << id << "\nImi� i nazwisko: "
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
	cout << "podaj dat� urodzenie: \n";
	cout << "Dzie�: ";
	cin >> dd;
	cout << "Miesi�c: ";
	cin >> mm;
	cout << "Rok: ";
	cin >> yyyy;

	uczen.setData(13, "Janusz", "Walczuk", {dd,mm, yyyy});

	uczen.showAllData();

	return 0;
}
