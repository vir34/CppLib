#include "Drukuj.h"
#include "Abs.h"

#include <cmath>

int main()
{
    Drukuj drukuj;

    Abs dzialanie;
    float x = 4.94;
    float wynik = dzialanie.wykonaj(x);
    drukuj.wykonaj("Wynik: ").wykonaj(wynik);

    return 0;
}
