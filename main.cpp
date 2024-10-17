#include "Drukuj.h"
#include "tablice/StwTab.h"
#include "tablice/ZwElTab.h"

#include <cmath>
#include <iostream>

int main()
{
    Drukuj drukuj;

    StwTab stwTab;
    ZwElTab zwElTab;

    std::vector <std::string> tab = stwTab.wykonaj(-10, " ");

    std::string element = zwElTab.wykonaj(tab, 0);

    drukuj.wykonaj("Wynik: ").wykonaj( element );

    return 0;
}
