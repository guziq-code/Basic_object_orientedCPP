#pragma once
#include <string>
#include <iostream>
using namespace std;

class Produkt
{
public:
    string nazwa;
    string typ_produktu;
    float waga;
    int dostepnosc;

    void wczytanie() {

        cout << "\n" << "\n" << "\n" << "\n" << " WprowadŸ dane produktu" << endl;

        cout << "\n" << " Podaj nazwê produktu ";
        cin >> nazwa;

        cout << " Podaj typ produktu ";
        cin >> typ_produktu;


        cout << " Podaj wagê ";
        cin >> waga;
    }

    void wypisanie() {

        cout << "\n" << " Produkt " << nazwa << " typ produktu " << typ_produktu << " waga produktu " << waga << "[kg]";


    }

    void sprawdzenie_dostepnosc() {

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







};

