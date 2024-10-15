#ifndef WSP_PI_H
#define WSP_PI_H

#include "Pi.h"

class Wsp_pi
{
    public:
        Wsp_pi();
        virtual ~Wsp_pi();

    float wykonaj(float x) {
        Pi pi;
        float wsp_pi = pi.wykonaj();
        float wartosc = x * wsp_pi / 180;
        return wartosc;
    }

    protected:

    private:
};

#endif // WSP_PI_H
