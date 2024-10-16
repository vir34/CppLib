#ifndef CEIL_H
#define CEIL_H

#include <cmath>

class Ceil
{
    public:
        Ceil();
        virtual ~Ceil();

    float wykonaj(float x) {
        float wynik = floor(x);
        return wynik;
    }

    protected:

    private:
};

#endif // CEIL_H
