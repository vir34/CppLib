#ifndef TGAMMA_H
#define TGAMMA_H

#include <cmath>

class Tgamma
{
    public:
        Tgamma();
        virtual ~Tgamma();

    float wykonaj(float x) {
        float wynik = tgamma(x);
        return wynik;
    }

    protected:

    private:
};

#endif // TGAMMA_H
