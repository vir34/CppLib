#ifndef CBRT_H
#define CBRT_H

#include <cmath>

class Cbrt
{
    public:
        Cbrt();
        virtual ~Cbrt();

    float wykonaj(float x) {
        float wynik = cbrt(x);
        return wynik;
    }

    protected:

    private:
};

#endif // CBRT_H
