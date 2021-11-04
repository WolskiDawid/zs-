#include <iostream>
#include <math.h>
using namespace std;

class Cylinder{
    public:
        double r, h;

    Cylinder();
    Cylinder(double pR, double pH);
    Cylinder(const Cylinder&);

    void catchSides(double&, double&);
    void setSides(double, double);

    double baseField();
    double lateralSurface();
    double totalField();
    double Capacity();
};

Cylinder::Cylinder(){};

void Cylinder::catchSides(double &pR, double &pH){
    pR = r;
    pH = h;
};

void Cylinder::setSides(double pR, double pH){
    r = pR;
    h = pH;
};

double Cylinder::baseField(){
    return 3.14 * (r*r);
};

int main()
{
    setlocale(LC_CTYPE, "Polish");
    double r, h;
    Cylinder c1;
    c1.catchSides(r, h);
    cout << "Promien a: " << r << endl;
    cout << "Bok b: " << h << endl;

    return 0;
}
