#ifndef ZWPOPROZTAB_H
#define ZWPOPROZTAB_H

#include <iostream>
#include <vector>

class ZwPopRozTab
{
    public:
        ZwPopRozTab();
        virtual ~ZwPopRozTab();

    int wykonaj (int rozmiar) {
        int rozm = 0;
        if (rozmiar > 0) { rozm = rozmiar; }
        if (rozmiar <= 0) { rozm = 1; }
        return rozm;
    }

    protected:

    private:
};

#endif // ZWPOPROZTAB_H
