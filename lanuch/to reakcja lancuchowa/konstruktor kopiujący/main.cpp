#include <iostream>
using namespace std;

class Rectangle{

private:
    double sideA;
    double sideB;
public:
    Rectangle();
    Rectangle(double pSideA, double pSideB);
    Rectangle(const Rectangle&);

    void catchSides(double&, double&);
    void setSides(double, double);
    double area();
    double circuit();
};

Rectangle::Rectangle(){
    cout << "Konstruktor domyœlny" << endl;
};

Rectangle::Rectangle(double pSideA, double pSideB){
    sideA=pSideA;
    sideB=pSideB;
    cout << "Konstruktor parametryczny" << endl;
};

Rectangle::Rectangle(const Rectangle& model){
    sideA=model.sideA;
    sideB=model.sideB;
    cout << "Konstruktor kopiuj¹cy" << endl;
};

void Rectangle::catchSides(double &pSideA, double &pSideB){
    pSideA = sideA;
    pSideB = sideB;
};

void Rectangle::setSides(double pSideA, double pSideB){
    sideA = pSideA;
    sideB = pSideB;
};

double Rectangle::area(){
    return sideA * sideB;
};

double Rectangle::circuit(){
    return 2 * sideA + 2 * sideB;
};

Rectangle copyRectangle(Rectangle rectangle){
    return rectangle;
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");

    double a,b;
    cout << "Pierwszy prostok¹t" << endl;
    Rectangle prostokat(2, 4);
    prostokat.catchSides(a, b);

    cout << "Bok a: " << a << endl;
    cout << "Bok b: " << b << endl;

	return 0;
}
