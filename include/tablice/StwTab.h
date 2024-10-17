#ifndef STWTAB_H
#define STWTAB_H

#include <iostream>
#include <vector>
#include <ZwPopRozTab.h>

class StwTab
{
    public:
        StwTab();
        virtual ~StwTab();

    std::vector<std::string> wykonaj(int rozmiar, std::string typ = " ") {
        ZwPopRozTab zwRoz;
        int rozm = zwRoz.wykonaj(rozmiar);

        std::vector<std::string> tab;

        for (int ind = 0; ind < rozm; ind++) {
            tab.push_back( std::to_string(ind) );
            std::cout << tab[ind] << std::endl;
        }

        return tab;
    }

    std::vector <int> wykonaj(int rozmiar, int typ = 0) {
        ZwPopRozTab zwRoz;
        int rozm = zwRoz.wykonaj(rozmiar);

        std::vector<int> tab;

        for (int ind = 0; ind < rozm; ind++) {
            tab.push_back(0);
        }

        return tab;
    }

     std::vector <float> wykonaj(int rozmiar, float typ = 0.0f) {
        ZwPopRozTab zwRoz;
        int rozm = zwRoz.wykonaj(rozmiar);

        std::vector <float> tab;

        for (int ind = 0; ind < rozm; ind++) {
            tab.push_back(0.0f);
        }

        return tab;
    }

     std::vector <double> wykonaj(int rozmiar, double typ = 0.0d) {
        ZwPopRozTab zwRoz;
        int rozm = zwRoz.wykonaj(rozmiar);

        std::vector <double> tab;

        for (int ind = 0; ind < rozm; ind++) {
            tab.push_back(0.0d);
        }

        return tab;
    }

    std::vector <char> wykonaj(int rozmiar, char typ = 'a') {
        ZwPopRozTab zwRoz;
        int rozm = zwRoz.wykonaj(rozmiar);

        std::vector <char> tab;

        for (int ind = 0; ind < rozm; ind++) {
            tab.push_back('a');
        }

        return tab;
    }

    protected:

    private:
};

#endif // STWTAB_H
