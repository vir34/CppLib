#ifndef COS_H
#define COS_H

#include <cmath>
#include "Wsp_pi.h"

class Cos
{
    public:
        Cos();
        virtual ~Cos();

    float wykonaj(float x) {
        Wsp_pi wsp_pi;
        float wynik = wsp_pi.wykonaj(x);
        wynik = cos(wynik);
        return wynik;
    }

    protected:

    private:
};

#endif // COS_H
