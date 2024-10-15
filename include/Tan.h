#ifndef TAN_H
#define TAN_H

#include <cmath>
#include "Wsp_pi.h"

class Tan
{
    public:
        Tan();
        virtual ~Tan();

    float wykonaj(float x) {
        Wsp_pi wsp_pi;
        float wynik = wsp_pi.wykonaj(x);
        wynik = tan(wynik);
        return wynik;
    }

    protected:

    private:
};

#endif // TAN_H
