#ifndef ACOS_H
#define ACOS_H

#include <cmath>
#include "Pi.h"

class Acos
{
    public:
        Acos();
        virtual ~Acos();

    float wykonaj(float x) {
        Pi pi;
        float wsp_pi = pi.wykonaj();
        float wynik = acos(x) * 180 / wsp_pi;
        return wynik;
    }

    protected:

    private:
};

#endif // ACOS_H
