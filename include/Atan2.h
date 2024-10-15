#ifndef ATAN2_H
#define ATAN2_H

#include <cmath>
#include "Pi.h"

class Atan2
{
    public:
        Atan2();
        virtual ~Atan2();

    float wykonaj(float x, float y) {
        Pi pi;
        float wsp_pi = pi.wykonaj();
        float wynik = atan2(y, x) * 180 / wsp_pi;
        return wynik;
    }

    protected:

    private:
};

#endif // ATAN2_H
