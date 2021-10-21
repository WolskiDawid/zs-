#include <iostream>
using namespace std;

struct Date {
    int dd, mm, yyyy;
};

class Car {
    //zmienne instancyjne
    public:
    unsigned int id;
    string brand, model="Brabus", color;
    unsigned short int power;
    float price;
    Date dateOfProduction;

    void getData();

    Car(int pId, string pBrand, string pModel, string pColor, unsigned short int pPower, float pPrice, Date pDateOfProduction){
        id=pId;
        brand=pBrand;
        model=pModel;
        color=pColor;
        power=pPower;
        price=pPrice;
        dateOfProduction=pDateOfProduction;
    };

    Car(int pId, string pBrand, string pModel);

};

void Car::getData(){
    cout << "Marka: " << brand << ", model: " << model << "\nkolor: " << color
    << "\nMoc: " << power << "KM\n" << "Cena: " << price
    << "\nRok produkcji: " << dateOfProduction.yyyy
    << "\nIdentyfikator: " << id << endl << endl;
};

Car::Car(int pId, string pBrand, string pModel){
    id=pID;
    brand = pBrand;
    model = pModel;
};

int main()
{



    return 0;
}
