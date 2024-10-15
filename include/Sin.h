#ifndef SIN_H
#define SIN_H

#include <cmath>
#include "Wsp_pi.h"

class Sin
{
    public:
        Sin();
        virtual ~Sin();

    float wykonaj(float x) {
        Wsp_pi wsp_pi;
        float wartosc = wsp_pi.wykonaj(x);
        return sin(wartosc);
    }

    protected:

    private:
};

#endif // SIN_H
