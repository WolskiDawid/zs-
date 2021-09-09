#include <iostream>
using namespace std;

class Rectangle{
	public:
	 int a;
	 int b;


	void ShowPerimeterAndBox(){
		int Perimeter=a*2+b*2;
		int Box=a*b;	
		cout << "Obwód prostok¹ta wynosi: " << Perimeter << "\nPole prostok¹ta wynosi: " << Box;
	};
};

int main(int argc, char** argv) {
	    setlocale(LC_CTYPE, "Polish");
	    
	    Rectangle side;
	    cout << "WprowadŸ bok a: ";
	    cin >> side.a;
	    cout << "\nWprowadŸ bok b: ";
	    cin >> side.b;
	
		side.ShowPerimeterAndBox();
	
	return 0;
}

