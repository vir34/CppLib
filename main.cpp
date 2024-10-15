#include "Drukuj.h"
#include "Ldexp.h"

#include <cmath>

int main()
{
    Drukuj drukuj;

    Ldexp dzialanie;
    float x = 0.95, y = 4;
    float wynik = dzialanie.wykonaj(x, y);
    drukuj.wykonaj("Wynik: ").wykonaj(wynik);

    return 0;
}
