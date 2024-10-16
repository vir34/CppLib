#ifndef NEARBYINT_H
#define NEARBYINT_H

#include <cmath>

class Nearbyint
{
    public:
        Nearbyint();
        virtual ~Nearbyint();

    float wykonaj(float x) {
        float wynik = nearbyint(x);
        return wynik;
    }

    protected:

    private:
};

#endif // NEARBYINT_H
