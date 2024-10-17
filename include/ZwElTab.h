#ifndef ZWELTAB_H
#define ZWELTAB_H

#include <iostream>
#include <vector>

class ZwElTab
{
    public:
        ZwElTab();
        virtual ~ZwElTab();

    std::string wykonaj(std::vector <std::string> tab, int ind) {
        int rozm = tab.size();
        int ostInd = rozm - 1;
        int in = 0;
        if (ind > ostInd) { in = ostInd; }
        else { in = ind; }
        return tab[in];
    }

    protected:

    private:
};

#endif // ZWELTAB_H
