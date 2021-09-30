#include <iostream>
using namespace std;

class School{
    //STATYCZNE ZMIENNE CZ£ONKOWSKIE (ZMIENNE KLASOWE)
    public:
    static string s_school;
    static string s_jobPosition;

    //DEKLARACJA - ZMIENNE CZ£ONKOWSKIE INSTANCYJNE
    public:
        string name;
        string surname;

        void getData();
        void setNameSurname(string name, string surname);
};

    string School::s_school="ZS£";
    string School::s_jobPosition="student";

    void School::getData(){
        cout << "Imiê i nazwisko: " << name << " " << surname
        << "\nSzko³a: " << s_school
        << "\nStanowisko pracy: " << s_jobPosition<<endl<<endl;
    };

    void School::setNameSurname(string name, string surname){
    School::name=name;
    School::surname=surname;
    };

int main()
{
    setlocale(LC_CTYPE, "polish");
    //cout << School::s_jobPosition<<endl;

    School kowalski;
    kowalski.setNameSurname("Janusz", "Kowalski");
    kowalski.getData();
    kowalski.s_jobPosition="Wyk³adowca";
    kowalski.getData();

    return 0;
}
