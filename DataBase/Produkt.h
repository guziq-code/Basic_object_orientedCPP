
#include <iostream>
using namespace std;

class Produkt
{
public:
    string nazwa;
    string typ_produktu;
    float waga;
    int dostepnosc;

    void wczytanie(); //wprowadz dane produktu
   
    void wypisanie(); // wypisanie prudktu

    void sprawdzenie_dostepnosc(); // sprawdzenie dostepnosci (dla int=1 "produkt dostêpny")

};

