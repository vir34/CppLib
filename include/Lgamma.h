#ifndef LGAMMA_H
#define LGAMMA_H

#include <cmath>

class Lgamma
{
    public:
        Lgamma();
        virtual ~Lgamma();

    float wykonaj(float x) {
        float wynik = lgamma(x);
        return wynik;
    }

    protected:

    private:
};

#endif // LGAMMA_H
