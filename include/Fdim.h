#ifndef FDIM_H
#define FDIM_H

#include <cmath>

class Fdim
{
    public:
        Fdim();
        virtual ~Fdim();

    float wykonaj(float x, float y) {
        float wynik = fdim(x, y);
        return wynik;
    }

    protected:

    private:
};

#endif // FDIM_H
