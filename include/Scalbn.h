#ifndef SCALBN_H
#define SCALBN_H

#include <cmath>

class Scalbn
{
    public:
        Scalbn();
        virtual ~Scalbn();

    float wykonaj(float x, float y) {
        float wynik = scalbn(x, y);
        return wynik;
    }

    protected:

    private:
};

#endif // SCALBN_H
