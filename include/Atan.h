#ifndef ATAN_H
#define ATAN_H

#include <cmath>
#include "Pi.h"

class Atan
{
    public:
        Atan();
        virtual ~Atan();

    float wykonaj(float x) {
        Pi pi;
        float wsp_pi = pi.wykonaj();
        float wynik = atan(x) * 180 / wsp_pi;
        return wynik;
    }

    protected:

    private:
};

#endif // ATAN_H
