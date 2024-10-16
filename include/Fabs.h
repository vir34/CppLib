#ifndef FABS_H
#define FABS_H

#include <cmath>

class Fabs
{
    public:
        Fabs();
        virtual ~Fabs();

    float wykonaj(float x) {
        float wynik = fabs(x);
        return wynik;
    }

    protected:

    private:
};

#endif // FABS_H
