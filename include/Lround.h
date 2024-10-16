#ifndef LROUND_H
#define LROUND_H

#include <cmath>

class Lround
{
    public:
        Lround();
        virtual ~Lround();

    float wykonaj(float x) {
        float wynik = lround(x);
        return wynik;
    }

    protected:

    private:
};

#endif // LROUND_H
