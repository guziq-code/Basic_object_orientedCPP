
// trivial CPP DATA_BASE sample (input, output)

#include "Produkt.h"
#include <iostream>

using namespace std;


void Produkt::wczytanie() {

    cout << "\n" << "\n" << "\n" << "\n" << " WprowadŸ dane produktu" << endl;

    cout << "\n" << " Podaj nazwê produktu ";
    cin >> nazwa;

    cout << " Podaj typ produktu ";
    cin >> typ_produktu;


    cout << " Podaj wagê ";
    cin >> waga;
}

void Produkt::wypisanie() {

    cout << "\n" << " Produkt " << nazwa << " typ produktu " << typ_produktu << " waga produktu " << waga << "[kg]";


}

void Produkt::sprawdzenie_dostepnosc() {

    /* 1- produkt dostêpny 0- produkt niedostêny*/

    cout << "\n" << "\n" << " czy produkt jest dostêpny ? ";
    cin >> dostepnosc;

    if (dostepnosc == 1) {

        cout << "\n" << " produkt jest dostêpny ";
    }
    else {

        cout << "\n" << " produkt jest niedostêpny ";
    }


}




int main() {

    Produkt p1;
    p1.wczytanie();
    p1.wypisanie();
    p1.sprawdzenie_dostepnosc();

    Produkt p2;
    p2.wczytanie();
    p2.wypisanie();
    p2.sprawdzenie_dostepnosc();

    Produkt p3;
    p3.wczytanie();
    p3.wypisanie();
    p3.sprawdzenie_dostepnosc();


    return 0;
}