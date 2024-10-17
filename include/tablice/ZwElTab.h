#ifndef ZWELTAB_H
#define ZWELTAB_H

#include <iostream>
#include <vector>
#include <ZwPopIndTab.h>

class ZwElTab
{
    public:
        ZwElTab();
        virtual ~ZwElTab();

    std::string wykonaj(std::vector <std::string> tab, int ind) {
        ZwPopIndTab zwPopIndTab;
        int in = zwPopIndTab.wykonaj(tab, ind);
        return tab[in];
    }

    protected:

    private:
};

#endif // ZWELTAB_H
