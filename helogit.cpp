#include <iostream>
using namespace std;

class Rectangle{
	public:
	 int a;
	 int b;


	void ShowPerimeterAndBox(){
		int Perimeter=a*2+b*2;
		int Box=a*b;	
		cout << "Obw�d prostok�ta wynosi: " << Perimeter << "\nPole prostok�ta wynosi: " << Box;
	};
};

int main(int argc, char** argv) {
	    setlocale(LC_CTYPE, "Polish");
	    
	    Rectangle side;
	    cout << "Wprowad� bok a: ";
	    cin >> side.a;
	    cout << "\nWprowad� bok b: ";
	    cin >> side.b;
	
		side.ShowPerimeterAndBox();
	
	return 0;
}

