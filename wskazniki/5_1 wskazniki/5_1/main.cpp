#include <iostream>
using namespace std;

class Worker {
    public:
        string name, surname;

        void getData();
};

    void Worker::getData(){
        cout << "Imi� i nazwisko: " << name << " " << surname << endl;
    };

int main()
{
    setlocale(LC_CTYPE, "polish");

    //deklaracja zmiennej wskaznikowej
    Worker *p_worker;
    //instancja klasy worker
    p_worker = new Worker();

    p_worker->name="Janusz";
    p_worker->surname="Nowak";

    p_worker->getData();

    //delete p_worker;
    //p_worker->getData();

    return 0;
}
