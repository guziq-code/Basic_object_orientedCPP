#include <iostream>
#include "pole_trapezu.h"
using namespace std;
float pole_trapezu::oblicz()
{
    return ((krawedz_gora + podstawa) * wysokosc) / 2;
}



int main() {

    pole_trapezu definiuj;
    cout << "Podaj d� kraw�dzi g�rnej ";
    cin >> definiuj.krawedz_gora;

    cout << "Podaj d� podstawy ";
    cin >> definiuj.podstawa;

    cout << "Podaj wysokosc ";
    cin >> definiuj.wysokosc;

    cout << "pole trapezu to " << definiuj.oblicz() << "[Jednostek kwadratowych]";
    return 0;
}

