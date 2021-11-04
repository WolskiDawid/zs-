#define M_PI 3.14159265358979323846
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

class Cylinder{
private:
    double r, h;
public:
    Cylinder(double pH, double pR);
    double baseArea();
    double sideArea();
    double totalArea();
    double Capacity();
    void showAllData();
};

Cylinder::Cylinder(double pH, double pR){
h = pH;
r = pR;
};

double Cylinder::baseArea(){
    return M_PI * pow(r,2);
};

double Cylinder::sideArea(){
    return 2*M_PI*r*h;
};

double Cylinder::totalArea(){
    return 2*baseArea()+sideArea();
};

double Cylinder::Capacity(){
    return baseArea()*h;
};

void Cylinder::showAllData(){
cout << "Pole podstawy: " << baseArea() << "\nPole powierchni bocznej: " << sideArea() << "\nPole Powierzchni ca�kowitej: "
     << totalArea() << "\nObj�to��: " << Capacity() << endl;
};

int main()
{
setlocale(LC_CTYPE, "Polish");

    double r, h;
    cout << "Podaj promie�: ";
    cin >> r;
    cout << "Podaj wysoko��: ";
    cin >> h;

    Cylinder cylinder(r, h);
    cylinder.showAllData();

return 0;
};

