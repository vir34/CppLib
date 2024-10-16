#ifndef TRUNC_H
#define TRUNC_H

#include <cmath>

class Trunc
{
    public:
        Trunc();
        virtual ~Trunc();

    float wykonaj(float x) {
        float wynik = trunc(x);
        return wynik;
    }

    protected:

    private:
};

#endif // TRUNC_H
