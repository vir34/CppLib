#ifndef ILOGB_H
#define ILOGB_H

#include <cmath>

class Ilogb
{
    public:
        Ilogb();
        virtual ~Ilogb();

    float wykonaj(float x) {
        float wynik = ilogb(x);
        return wynik;
    }

    protected:

    private:
};

#endif // ILOGB_H
