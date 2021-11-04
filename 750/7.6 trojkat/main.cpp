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
cout << "Pole podstawy: " << baseArea() << "\nPole powierchni bocznej: " << sideArea() << "\nPole Powierzchni ca³kowitej: "
     << totalArea() << "\nObjêtoœæ: " << Capacity() << endl;
};

int main()
{
setlocale(LC_CTYPE, "Polish");

    double r, h;
    cout << "Podaj promieñ: ";
    cin >> r;
    cout << "Podaj wysokoœæ: ";
    cin >> h;

    Cylinder cylinder(r, h);
    cylinder.showAllData();

return 0;
};

