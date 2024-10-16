#ifndef SQRT_H
#define SQRT_H

#include <cmath>

class Sqrt
{
    public:
        Sqrt();
        virtual ~Sqrt();

    float wykonaj(float x) {
        float wynik = sqrt(x);
        return wynik;
    }

    protected:

    private:
};

#endif // SQRT_H
