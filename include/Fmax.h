#ifndef FMAX_H
#define FMAX_H

#include <cmath>

class Fmax
{
    public:
        Fmax();
        virtual ~Fmax();

    float wykonaj(float x, float y) {
        float wynik = fmax(x, y);
        return wynik;
    }

    protected:

    private:
};

#endif // FMAX_H
