#include <iostream>
using namespace std;

class Rectangle{
	public:
		float a;
		float b;
		
		float areaRectangle(float a,float b);
		float perimeterRectangle(float a,float b);
		
		void showAllData(float a,float b);
		
};

	float Rectangle::areaRectangle(float a,float b){
		return a*b;
	}
	
	float Rectangle::perimeterRectangle(float a,float b){
		return 2*a+2*b;
	}
	
	void Rectangle::showAllData(float a,float b){
		cout << "Bok a: " << a << ", bok b: " << b << endl
			 << "Pole prostok¹ta wynosi: " << Rectangle::areaRectangle(a,b)
			 << "cm^2\nObwód prostok¹ta wynosi: " << Rectangle::perimeterRectangle(a,b) << "cm\n";
	}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Rectangle prostokat;
	cout << prostokat.areaRectangle(2, 4) << endl;
	cout << prostokat.perimeterRectangle(2,4) << endl;
	prostokat.showAllData(2,4);
	
	
	return 0;
	
}
