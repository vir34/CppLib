#ifndef CTG_H
#define CTG_H

#include <cmath>
#include "Wsp_pi.h"
#include "Sin.h"
#include "Cos.h"

class Ctg
{
    public:
        Ctg();
        virtual ~Ctg();

    float wykonaj(float x) {
        Wsp_pi wsp_pi;
        float wsp = wsp_pi.wykonaj(x);
        float ctgx = ctg(wsp);
        return ctgx;
    }

    protected:

    private:
};

#endif // CTG_H
