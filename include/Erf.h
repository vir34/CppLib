#ifndef ERF_H
#define ERF_H

#include <cmath>

class Erf
{
    public:
        Erf();
        virtual ~Erf();

    float wykonaj(float x) {
        float wynik = erf(x);
        return wynik;
    }

    protected:

    private:
};

#endif // ERF_H
