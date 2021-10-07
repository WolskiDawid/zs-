#include <iostream>
using namespace std;

    class Worker{
        public:
        string name, surname;
        void getData();
    };

void Worker::getData(){
    cout << "Imiê i nazwisko: " << name << " " << surname << endl;
};

int main()
{
    setlocale(LC_CTYPE, "polish");

        Worker kowalski;

        Worker * p_kowalski;
        cout << p_kowalski << endl;
        p_kowalski = &kowalski;
        //ADRES

        cout << "Adres obiektu kowalski: " <<p_kowalski << endl;
        kowalski.name="Janusz";
        cout << kowalski.name << endl;

        cout << p_kowalski->name << endl;
        p_kowalski->name="Tomasz";
        cout << p_kowalski->name << endl;
        kowalski.surname="Nowak";

        p_kowalski->getData();

    return 0;
}
