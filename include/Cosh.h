#ifndef COSH_H
#define COSH_H

#include <cmath>

class Cosh
{
    public:
        Cosh();
        virtual ~Cosh();

    float wykonaj(float x) {
        float wynik = cosh(x);
        return wynik;
    }

    protected:

    private:
};

#endif // COSH_H
