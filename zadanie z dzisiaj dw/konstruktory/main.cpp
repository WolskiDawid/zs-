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

        Car(int pId){
        id=pId;
    };

    //DRUGI SPOSOB
    Car(int pId, string pBrand);

};

void Car::getData(){
    cout << "Marka: " << brand << ", model: " << model << "\nkolor: " << color
    << "\nMoc: " << power << "KM\n" << "Cena: " << price
    << "\nRok produkcji: " << dateOfProduction.yyyy
    << "\nIdentyfikator: " << id << endl << endl;
}

    //DEFINICJA DRUGI SPOSOB
    Car::Car(int pId, string pBrand){
    id=pId;
    brand = pBrand;
    };

int main()
{
    //AUTOMATYCZNIE WYKRYWA ILE JEST PARAMETROW I SAM PRZYPISUJE
    setlocale(LC_CTYPE, "polish");
    Car merol(7, "Mercedes-Benz", "X-Class", "Czarny", 750, 300000, {21,10,2021});
    merol.getData();

    Car fura(213, "Fura");
    fura.getData();

    Car tesla(724);
    tesla.getData();

//ROBIMY WSKAZNIK
    Car*wsk;
    //ADRES WSKAZNIKA
    wsk=&fura;

    //WYSWIETLAMY SKAZNIKIEM
    wsk->getData();

    return 0;
}
