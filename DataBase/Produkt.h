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

        cout << "\n" << "\n" << "\n" << "\n" << " Wprowad� dane produktu" << endl;

        cout << "\n" << " Podaj nazw� produktu ";
        cin >> nazwa;

        cout << " Podaj typ produktu ";
        cin >> typ_produktu;


        cout << " Podaj wag� ";
        cin >> waga;
    }

    void wypisanie() {

        cout << "\n" << " Produkt " << nazwa << " typ produktu " << typ_produktu << " waga produktu " << waga << "[kg]";


    }

    void sprawdzenie_dostepnosc() {

        /* 1- produkt dost�pny 0- produkt niedost�ny*/

        cout << "\n" << "\n" << " czy produkt jest dost�pny ? ";
        cin >> dostepnosc;

        if (dostepnosc == 1) {

            cout << "\n" << " produkt jest dost�pny ";
        }
        else {

            cout << "\n" << " produkt jest niedost�pny ";
        }


    }







};

