#ifndef FMA_H
#define FMA_H

#include <cmath>

class Fma
{
    public:
        Fma();
        virtual ~Fma();

    float wykonaj(float x, float y, float z) {
        float wynik = fma(x, y, z);
        return wynik;
    }

    protected:

    private:
};

#endif // FMA_H
