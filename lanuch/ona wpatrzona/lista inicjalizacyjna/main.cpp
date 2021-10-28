#include <iostream>
using namespace std;

class Car{
	public:
		unsigned int id;
		string brand;
		string model;

		Car();

		Car(unsigned int id, string brand, string model);

		void getData();

};

Car::Car():
    id {0},
    brand {"MARKA"},
    model {"MODEL"}
{};

Car::Car(unsigned int pId, string pBrand, string pModel):
    id {pId},
    brand {pBrand},
    model {pModel}
{
    cout << "Konstruktor domy�lny" <<endl;
};

void Car::getData(){
    cout << "Id: " << id << endl << "Marka: " << brand << endl << "Model: " << model << endl << endl;
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");

    Car fiat;
    fiat.getData();

    Car fiat1(8, "Fiat", "Polo");
    fiat1.getData();
	return 0;
}
