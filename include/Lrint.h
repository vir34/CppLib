#ifndef LRINT_H
#define LRINT_H

#include <cmath>

class Lrint
{
    public:
        Lrint();
        virtual ~Lrint();

    float wykonaj(float x) {
        float wynik = lrint(x);
        return wynik;
    }

    protected:

    private:
};

#endif // LRINT_H
