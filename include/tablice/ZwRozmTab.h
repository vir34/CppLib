#ifndef ZWROZMTAB_H
#define ZWROZMTAB_H

#include <iostream>
#include <vector>

class ZwRozmTab
{
    public:
        ZwRozmTab();
        virtual ~ZwRozmTab();

    int wykonaj(std::vector <std::string> tab) {
        return tab.size();
    }

    int wykonaj(std::vector <int> tab) {
        return tab.size();
    }

    int wykonaj(std::vector <float> tab) {
        return tab.size();
    }

    int wykonaj(std::vector <double> tab) {
        return tab.size();
    }

    int wykonaj(std::vector <char> tab) {
        return tab.size();
    }

    protected:

    private:
};

#endif // ZWROZMTAB_H
