#ifndef ASIN_H
#define ASIN_H

#include <cmath>
#include "Pi.h"

class Asin
{
    public:
        Asin();
        virtual ~Asin();

    float wykonaj(float x) {
        Pi pi;
        float wsp_pi = pi.wykonaj();
        float wynik = asin(x) * 180 / wsp_pi;
        return wynik;
    }

    protected:

    private:
};

#endif // ASIN_H
