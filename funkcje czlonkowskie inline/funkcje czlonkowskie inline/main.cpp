#include <iostream>
#include <cmath>
using namespace std;

//DEFINICJA KLASY
class Room{
//SK£ADOWE PUBLICZNE
    public:
        float width, length;

    //DEFNIUJEMY FUNKCJA CZLONKOWSKA INLINE
        inline int intLength(){
        return round(length);
        };

        inline int intWidth(){
        return round(width);
        };
};

int main()
{
    setlocale(LC_CTYPE, "Polish");
    Room pokoj;
    pokoj.length=3.5;
    pokoj.width=5.5;

    cout << "D³ugoœæ pokoju: " << pokoj.length << "m"
        <<"\nD³ugoœæ pokoju po zaokr¹gleniu: " << pokoj.intLength()
        <<"m\n\nSzerokoœæ pokoju: " << pokoj.width << "m"
        <<"\nSzerokoœæ pokoju po zaokr¹gleniu: " << pokoj.intWidth() << "m\n\n";

    return 0;
}
